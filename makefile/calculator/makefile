calculator:main.o calc.o
	gcc $^ -o $@
main.o:main.c calc.h
	gcc -c $<
calc.o:calc.c
	gcc -c $<
clean:
	rm -f *.o calculator
