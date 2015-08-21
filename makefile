CC=gcc
CFLAGS=-03 -c -wall
all: obj
	$(CC) -0 main *.o
	
obj: 
	$(CC) $(CFLAGS) *.c

clean:
	rm main