# Compilador e flags
CC := gcc
CFLAGS := -Wall -Wextra -g

# Subdiretórios com programas C
SUBDIRS := cs50/helloword cs50/ex-mario

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

.PHONY: all clean start stop build logs mario