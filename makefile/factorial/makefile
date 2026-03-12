factorial:main.o factorial.o	
	gcc $^ -o $@	
main.o:main.c factorial.h	
	gcc -c $<
factorial.o:factorial.c
	gcc -c $<	
clean:	
	rm -f *.o factorial
