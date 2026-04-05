bitclear:main.o clear.o
	gcc $^ -o $@
main.o:main.c clear.h
	gcc -c $<
clear.o:clear.c
	gcc -c $<

clean:
	rm -f *.o bitclear
