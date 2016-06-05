#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int main()
{
	int mas[100], i, n, max2 = 0;
	int min, max;
	
	printf ("Array size: ");
	scanf ("%d", &n);
	
	printf ("\nMin rand: ");
	scanf ("%d", &min);
	
	printf ("\nMax rand: ");
	scanf ("%d", &max);
	
	srand(time(0));
	
	for (i = 0; i < n; i++){
		mas[i] = get_random_int_min_max(min, max);
		printf("\nmas[%d] = %d", i, mas[i]);
	}
	
	for(i = 0; i < n; i++){
		if(mas[i] > max2){
			max2 = mas[i];
		}
	}
	
	printf ("\n\nMax zna4ennya: %d", max2);
	
	return 0;
}
