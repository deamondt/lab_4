#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int poisk(int *mas)
{
	int i, i2, n = 10;
	for(i = 0; i < n; i++)
		for(i2 = (i + 1); i2 < n; i2++) {
			if(mas[i] == mas[i2])
				return 1;
		}
		
	return 0;	
}

int main()
{
	int mas[100], i, i2, n = 10;
	int max, min;
	
	printf ("\nMin rand: ");
	scanf ("%d", &min);
	
	printf ("\nMax rand: ");
	scanf ("%d", &max);
	
	srand(time(0));
	
	for(i = 0; i < n; i++){
		mas[i] = get_random_int_min_max(min, max);
	}
	for(i = 0; i < n; i++) {
		printf("\n\tmas[%2d] = %d", i, mas[i]);
	}
	
	if(poisk(mas)){
	
		printf("\n\nEst sovpadenie");
	}else{
		printf("\n\nNety sovpadeniya");
	}
	
	return 0;
}
