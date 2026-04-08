output:main.o math_ops.o	
	gcc $^ -o $@
main.o:main.c	
	gcc -c $<	
math_ops.o:math_ops.c	
	gcc -c $<	
clean:	
	rm -f *.o output
