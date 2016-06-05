#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);
}

int perev(int *mas, int n, int zn)
{
	int i;
	for(i = 0; i < n; i++)
		if(zn == mas[i])
			return 0;
		
	return 1;	
}

void rand_mas_n(int *mas, int n, int kol, int poch)
{
	int i;
	for(i = 0; i < n; ) {
		mas[i] = poch + rand() % kol;
		if(perev(mas, i, mas[i]))
			i++;
	}	
}

int main()
{
	int masA[200], masB[200];
	int size_A, size_B, roz_diap;
	int i_A, i_B, flag = 0;
	
	srand(time(0));
	
	printf("\nArray size A: ");
	scanf("%d", &size_A);
	printf("\nArray size B: ");
	scanf("%d", &size_B);
	printf("\nVvedite diapazon: ");
	scanf("%d", &roz_diap);
	
	rand_mas_n(masA, size_A, roz_diap, 0);
	rand_mas_n(masB, size_B, roz_diap, 0);
	printf("\nMAS A:");
	print_mas(masA, size_A);
	printf("\n\nMAS B:");
	print_mas(masB, size_B);
	printf("\n\n");
	
	for(i_A = 0; i_A < size_A; i_A++)
		for(i_B = 0; i_B < size_B; i_B++)
			if(masA[i_A] == masB[i_B]) {
				flag = flag + 1;
				break;
			}
	
	if(flag == size_A){
		printf("\n\nThe array A is an array B\n\n");
	} else {
		printf("\n\nThe array A is not an array B\n\n");
	}
	
	return 0;
}
