FILE = Programa
EXEC_EXT = .exe
CC = gcc
CFLAGS = -g -std=c99 -Wall -pedantic

all: compila linka

compila:
	$(CC) -c $(FILE).c -o $(FILE).o

linka: compila
	$(CC) $(FILE).o -o $(FILE)$(EXEC_EXT)
