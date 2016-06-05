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

int array_find_max(int * array, int n, int first)
{
    int i;
    int max;
    int imax;
    max = array[first];
    for(i = first + 1; i < n - 1; i++) {
        if (array[i] > max) {
              max = array[i];
              imax = i;
        }
    }
    return imax;
}


void array_choice_sort(int * array, int n)
{
   int i, j, x;
   int max_i;
   for(i = 0; i < n - 1; i++) {
       max_i = array_find_max(array, n, i);
       x = array[i];
       array[i] = array[max_i];
       array[max_i] = x;
   }
}

main()
{
    int mas[100];
    int n = 10, i;
    int max_rand, min, max;
    int x;
    clock_t start;
    clock_t finish;

    int position_x;


	printf ("\nMin rand: ");
	scanf ("%d", &min);
	
	printf ("\nMax rand: ");
	scanf ("%d", &max);

    srand(time(0));

    for (i = 0; i < n; i++) {
        mas[i] = get_random_int_min_max(min, max);
    }

    array_output(mas, n);

    start = clock();
    array_choice_sort(mas, n);
    finish = clock();
    printf("\nSorted array: \n");
    array_output(mas, n);
    printf ("\n Time: %lf\n", (float) (finish - start) / CLOCKS_PER_SEC);
}
