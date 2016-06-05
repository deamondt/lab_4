#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int mas[100], mas2[100], i, i2, n;
	int min, max;
	
	printf ("\nArray size: ");
	scanf ("%d", &n);

	printf ("\nMin rand: ");
	scanf ("%d", &min);
	
	printf ("\nMax rand: ");
	scanf ("%d", &max);
	
	for(i = 0, i2 = 1; i < n; i++, i2 += 2)
		mas[i] = i2;
	
	for(i = 0; i < n; i++) 
		printf("\nmas[%2d] = %d", i, mas[i]);
	
	for(i = 0, i2 = (n - 1); i < n; i++, i2--)
		mas2[i] = mas[i2];
		
	for(i = 0; i < n; i++)
		printf("\n\t\tmas2[%d] = %d", i, mas2[i]);
	
	return 0;
}
