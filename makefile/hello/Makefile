string:main.o name.o	
	gcc $^ -o $@
main.o:main.c name.h
	gcc -c $<
name.o:name.c	
	gcc -c $<	
clean:	
	rm -f *.o string
