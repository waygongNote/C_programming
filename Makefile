all: result clean
result: *.o
	gcc *.o -o result
*.o: *.c
	gcc -c *.c
clean:
	rm -f *.o
