# Nome do executável (deve ser o mesmo que o nome do arquivo .c sem a extensão)
TARGET := ex-mario

# Compilador e flags
CC := gcc
CFLAGS := -Wall -Wextra -g
LDFLAGS := -lcs50

# Regra padrão
all: $(TARGET)

# Compila o programa
$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# Limpa o executável
clean:
	rm -f $(TARGET)

.PHONY: all clean