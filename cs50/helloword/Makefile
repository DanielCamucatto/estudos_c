# Makefile para compilar helloWord.c
CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = helloWord

all: $(TARGET)

$(TARGET): helloWord.c
	$(CC) $(CFLAGS) helloWord.c -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
