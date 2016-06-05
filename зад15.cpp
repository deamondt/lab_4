#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int para(int *mas, int i) 
{
	if(mas[i] == mas[i + 1]){
	    return 1;
	} else {
		return 0;
	}

}


int main()
{
	int mas[100], i, n, max2 = 0, kilkist;
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
		kilkist += para(mas, i);
	}
	
	printf ("\n\tV masive %d par odinakovih 4isel", kilkist);
	
	return 0;
}
