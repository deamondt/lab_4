#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int mas1[200], mas2[200];
	int size, i, j, max_rand;
	
	srand(time(0));
	
	printf("\nArray size: ");
	scanf("%d", &size);
	
	printf("\nMax rand: ");
	scanf("%d", &max_rand);
	
	printf("Mas1:\n\n");
	
	for (i = 0; i < size; i++){
		mas1[i] = rand() % max_rand;
		printf("mas[%d] = %d\n", i, mas1[i]);
	}
	
	printf("Mas2:\n\n");
	
	for (i = 0; i < size; i++){
		mas2[i] = rand() % max_rand;
		printf("mas [%d] = %d\n", i, mas2[i]);
	}

	printf("\nthe intersection of arrays:\n\n");
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			if(mas1[i] == mas2[j]){
				printf("mas[%d] = %d\n", i, mas1[i]);
				break;
			}
		}
	}
	return 0;
}
