#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

void array_output(int * array, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("mas[%2d] = %d\n", i, array[i]);
    }
}


void array_bubble_sort(int * array, int n)
{
   int i, j, x;
   for(i = 0; i < n; i++) {
       for(j = 0; j < n - 1; j++) {
           if (array[j] > array[j + 1]) {
               x = array[j + 1];
               array[j + 1] = array[j];
               array[j] = x;
           }
       }
   }
}


main()
{
    int mas[100];
    int n = 10, i;
    int max_rand;
    int x;
    int min, max;
	clock_t start;
    clock_t finish;
	
	printf ("\nMin rand: ");
	scanf ("%d", &min);
	
	printf ("\nMax rand: ");
	scanf ("%d", &max);

    int position_x;

    srand(time(0));

    for (i = 0; i < n; i++) {
        mas[i] = get_random_int_min_max(min, max);
    }

    array_output(mas, n);

    start = clock();
    array_bubble_sort(mas, n);
    finish = clock();
    printf("\nSorted array: \n");
    array_output(mas, n);
      
}
