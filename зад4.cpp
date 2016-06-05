#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("\n\tmas[%2d] = %d", i, mas[i]);
}

int max_zn(int *mas, int n, int zn_m)
{
	int i, zn = zn_m;
	int max = mas[zn_m];
	
	if(zn_m == n)
		return zn_m;
	
	for(i = zn_m; i < n; i++)
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
		zn = max_zn(mas, SIZE, i);
		mas[i] = mas[zn];
		mas[zn] = x;
	}
}

int main()
{
	int mas[SIZE + 10], i, n, x, x2, flag = 0;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 50;
	
	sort(mas, SIZE);
	print_mas(mas, SIZE);
	
	printf("\n\nVvedite N: ");
	scanf("%d", &n);
	
	for(i = (SIZE - 1), mas[SIZE + 1] = 0; i >= 0; i--) {
		if(n >= mas[i])
			mas[i + 1] = mas[i];
		else {
			mas[i + 1] = n;
			flag = 1;
			break;
		}	
	}	
	
	if(flag == 0)
		mas[0] = n;
	
	print_mas(mas, (SIZE + 1));
	
	return 0;
}
