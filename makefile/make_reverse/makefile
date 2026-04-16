out:main.o util.o	
	gcc $^ -o $@
main.o:main.c	
	gcc -c $<
util.o:util.c	
	gcc -c $<
clean:	
	rm -f *.o out
