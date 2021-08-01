CC = gcc
Cflags = -Wall -o 
objects = sums.o products.o C_Shanties.o 

top : top.c $(objects)
	$(CC) $(Cflags) top top.c $(objects)

C_Shanties.o : C_Shanties.c
	$(CC) -c $(Cflags) C_Shanties.o C_Shanties.c

products.o : products.c
	$(CC) -c $(Cflags) products.o products.c

sums.o : sums.c
	$(CC) -c $(Cflags) sums.o sums.c
	
clean : 
	rm *.o
	rm *~
