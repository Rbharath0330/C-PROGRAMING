out:main.o calc.o	
	gcc $^ -o $@
main.o:main.c	
	gcc -c $<
calc.o::calc.c	
	gcc -c $<
clean:
	rm-f *.o out

