CC = gcc
CFLAGS = -Wall -Iinclude

all: detective

detective: src/main.o src/salas.o
	$(CC) $(CFLAGS) src/main.o src/salas.o -o detective

src/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o

src/salas.o: src/salas.c
	$(CC) $(CFLAGS) -c src/salas.c -o src/salas.o

clean:
	rm -f src/*.o detective
