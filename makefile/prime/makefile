output:main.o prime.o	
	gcc $^ -o $@	
main.o:main.c prime.h	
	gcc -c $<	
prime.o:prime.c	
	gcc -c $<	
clean:	
	rm -f *.o output
