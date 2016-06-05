#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	int mas1[100], mas2[100], i, j, k = 0;
	int flag, size;
	
	printf ("\nArray size: ");
	scanf ("%d", &size);
	
	srand(time(0));
	
	for(i = 0; i < size; i++)
		mas1[i] = rand() % 20;
	
	for(i = 0; i < size; i++) 
		printf("\n\tmas[%2d] = %d", i, mas1[i]);
	
	for(i = 0; i < size; i++) {
		flag = 1;
		for(j = 0; j < size; j++) {
			if(j == i)
				continue;
			if(mas1[i] == mas1[j]) {
				flag = 0;
				break;
			}
		}
		if(flag) {
			mas2[k] = mas1[i];
			k++;
		}
	}
	
	printf("\nThe numbers are only once: ");
	for(i = 0; i < k; i++) 
		printf("\n\tmas[%2d] = %d", i, mas2[i]);
	
	return 0;
}
