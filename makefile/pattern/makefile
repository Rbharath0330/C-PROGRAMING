pattern:main.o pattern.o	
	gcc $^ -o $@
main.o:main.c pattern.h	
	gcc -c $<
pattern.o:pattern.c	
	gcc -c $<
clean:	
	rrm -f *.o pattern
