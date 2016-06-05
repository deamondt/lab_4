#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int perevirka(int * mas, int i);

int perevirka(int * mas, int i) 
{
	int i2;
	for(i2 = 0; i2 < i; i2++) {
		if (mas[i] == mas[i2])
			return 0;
	}
	return 1;
}

int main ()
{
	int massiv[100];
	int i;
	srand(time(0));
	
	for(i = 0; i < 15; ) {
		massiv[i] = rand() % 100;
		if(perevirka(massiv, i))
			i++;
	}	
	
	for(i = 0; i < 15; i++)
		printf("\nMassiv[%d]=%d", i, massiv[i]);
	
	return 0;
}


