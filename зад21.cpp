#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20
#define DIAP 30

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);
}


void rand_mas_n(int *mas, int n, int kol, int poch)
{
	int i;
	for(i = 0; i < n; i++) {
		mas[i] = poch + rand() % kol;
	}	
}

int main()
{
	int masA[2 * SIZE], masB[SIZE];
	int i, i_B, i_pr;
	int flag, siz_kol = 0;
	
	srand(time(0));
	
	rand_mas_n(masA, SIZE, DIAP, 0);
	rand_mas_n(masB, SIZE, DIAP, 0);
	printf("\n\nMAS A: ");
	print_mas(masA, SIZE);
	printf("\n\nMAS B: ");
	print_mas(masB, SIZE);
	
	printf("\n\n");
	
	for(i = SIZE, i_B = 0; i_B < SIZE; i_B++) {
		for(i_pr = 0, flag = 1; i_pr < SIZE; i_pr++) {
			if(masB[i_B] == masA[i_pr]) {
				flag = 0;
				break;
			}	
		}
		if(flag) {
			masA[i] = masB[i_B];
			siz_kol = siz_kol + 1;
			i++;
		}
	}
	
	printf("Association:");
	
	print_mas(masA, SIZE + siz_kol);
	
	return 0;
}
