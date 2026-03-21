output:main1.o divi.o	
	gcc main1.o divi.o -o output
result:main.o mull.o	
	gcc main.o mull.o -o result
main.o:main.c	
	gcc -c main.c 
mull.o:mull.c	
	gcc -c mull.c 	
main1.o:main1.c divi.h
	gcc -c main1.c 
divi.o:divi.c 
	gcc -c divi.c

