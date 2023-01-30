
$CC = gcc

all:
	$(CC) main.c HashMap.c -o main

clean:
	rm main
