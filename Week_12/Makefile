CC = gcc
CFLAGS = -Wall -g

# Target: Executable file
myprogram: ./main.o ./Recursion_Example.o
	$(CC) $(CFLAGS) -o aprogram main.o Recursion_Example.o

# Rules for compiling object files
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

Recursion_Example.o: Recursion_Example.c
	$(CC) $(CFLAGS) -c Recursion_Example.c

# Clean up build artifacts
clean:
	rm -f ./*.o aprogram

