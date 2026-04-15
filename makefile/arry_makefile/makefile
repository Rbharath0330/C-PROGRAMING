out:main.o sum.o	
	gcc $^ -o $@
main.o:main.c	
	gcc -c $<
sum.o:sum.c	
	gcc -c $<
clean:	
	rm -f *.o out
