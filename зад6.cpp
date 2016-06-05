#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}


int main ()
{
	int mas[60], i, sum = 0;
	
	for(i = 0; i < 30; i++) {
		mas[i] = get_random_int_min_max(-30, 30);
		printf("\nmas[%d] = %d", i, mas[i]);
	}
	
	for(i = 0; i < 30; i++){
	
		if((mas[i] % 3) == 0){
		sum += mas[i];
		}
	}
		
	printf("\nsum = %d", sum);	

	return 0;
}
