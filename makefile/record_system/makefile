student1:main.o student.o	
	gcc $^ -o $@	
main.o:main.c student.h	
	gcc -c $<	
student.o:student.c	
	gcc -c $<
clean:	
	rm -f *.o student1

