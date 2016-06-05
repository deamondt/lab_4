#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int findmax(int *mas, int n, int max2)
{
	int i, zn = max2;
	int max = mas[max2];
	
	if(max2 == n)
		return max2;
	
	for(i = max2; i < n; i++)
		if(mas[i] > max) {
			max = mas[i];
			zn = i;
		}	
		
	return zn;	
}

void sort(int *mas, int n)
{
	int i, x, zn;
	for(i = 0; i < n; i++) {
		x = mas[i];
		zn = findmax(mas, n, i);
		mas[i] = mas[zn];
		mas[zn] = x;
	}
}

int main()
{
	int mas[100], i, n, flag = 0;
	int min, max, zna4ennya;
	
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
	
	sort(mas, n);
	
	for (i = 0; i < n; i++){
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	printf ("\nEnter n: ");
	scanf ("%d", &zna4ennya);
	
	for(i = (n - 1), mas[n + 1] = 0; i >= 0; i--) {
		if(zna4ennya >= mas[i])
			mas[i + 1] = mas[i];
		else {
			mas[i + 1] = zna4ennya;
			flag = 1;
			break;
		}	
	}
	
	if(flag == 0){
		mas[0] = n;
	}
		
	for (i = 0; i < (n + 1); i++){
		printf("\nmas[%d] = %d", i, mas[i]);
	}
	
	return 0;
}
