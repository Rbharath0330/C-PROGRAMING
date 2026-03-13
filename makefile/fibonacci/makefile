fibonacci:main.o fibino.o	
	gcc $^ -o $@	
main.o:main.c fibino.h	
	gcc -c $<	
fibino.o:fibino.c	
	gcc -c $<	
clean:	
	rm -f *.o $@
