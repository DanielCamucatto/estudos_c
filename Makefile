# Compilador e flags
CC := gcc
CFLAGS := -Wall -Wextra -g

# Encontra todos os subdiretórios em cs50/ que contêm um Makefile
SUBDIRS := $(patsubst %/Makefile,%,$(wildcard cs50/*/Makefile))

# Objetivo padrão: compila todos os programas
all:
	@for dir in $(SUBDIRS); do $(MAKE) -C $$dir; done

# Limpa todos os executáveis
clean:
	@for dir in $(SUBDIRS); do $(MAKE) clean -C $$dir; done

# Comandos Docker Compose
start:
	docker compose up -d

stop:
	docker compose down

build:
	docker compose build

logs:
	docker compose logs -f

# Roda o programa mario
mario:
ifeq ($(shell test -f /.dockerenv && echo -n true),true)
	# Dentro do container: compila e depois roda
	$(MAKE) all
	@echo "--- Rodando ex-mario (dentro do container) ---"
	@./cs50/ex-mario/ex-mario
else
	# Fora do container: delega o comando 'make mario' para o container
	@echo "--- Disparando 'make mario' dentro do container ---"
	@docker exec -it cs50_c make mario
endif

# Roda o programa mario-desafio
 mario-desafio:
ifeq ($(shell test -f /.dockerenv && echo -n true),true)
	# Dentro do container: compila e depois roda
	$(MAKE) all
	@echo "--- Rodando ex-mario-dasafio (dentro do container) ---"
	@./cs50/ex-mario-dasafio/ex-mario-desafio
else
	# Fora do container: delega o comando 'make mario-desafio' para o container
	@echo "--- Disparando 'make mario-desafio' dentro do container ---"
	@docker exec -it cs50_c make mario-desafio
endif

.PHONY: all clean start stop build logs mario