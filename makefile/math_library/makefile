output:main.o math.o	
	gcc $^ -o $@ -lm
main.o:main.c
	gcc -c $<	
math.o:math.c	
	gcc -c $<	
clean:	
	rm -f *.o output
