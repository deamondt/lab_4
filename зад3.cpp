#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("\n\tmas[%2d] = %d", i, mas[i]);
}

int para(int *mas, int zn) 
{
	if(mas[zn] == mas[zn + 1])
		return 1;
	else
		return 0;
}

int main()
{
	int mas[SIZE], i, sum = 0;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 5;
	
	print_mas(mas, SIZE);
	
	for(i = 0; i < SIZE; i++)
		sum += para(mas, i);
	
	printf("\n\n\t\t\t= %d", sum);
	
	return 0;
}
