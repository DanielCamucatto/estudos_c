# Compila todos os arquivos .c no diretório
SOURCES := $(wildcard *.c)
TARGETS := $(SOURCES:.c=)
CC := gcc
CFLAGS := -Wall -Wextra -g

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)

.PHONY: all clean start stop build logs

# Comandos para Docker Compose
start:
	docker compose up -d

stop:
	docker compose down

build:
	docker compose build

logs:
	docker compose logs -f
