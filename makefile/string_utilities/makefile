CC = gcc
output: main.o string_utils.o	
	$(CC) $^ -o $@	
main.o:main.c	
	$(CC) -c $<	
string_utils.o: string_utils.c	
	$(CC) -c $<	
clean:	
	rm -f *.o output	
.PHONY: clean
