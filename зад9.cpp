#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}


int poisk(int * massiv, int n, int x)
{
    int i;
    for (i = 0; i < n; i++) {
        if (massiv[i] == x) {
            return i;
        }
    }
    return -1;
}


main()
{
    int mas[100];
    int n = 20, i;
    int max_rand;
    int x;

    int position_x;

    srand(time(0));

    for (i = 0; i < n; i++) {
        mas[i] = get_random_int_min_max(0, 100);
    }

    for (i = 0; i < n; i++) {
        printf("mas[%d]=%d\n", i, mas[i]);
    }

    printf("\n\tVvedite element dlya poiska\nx=");
    scanf("%d", &x);
    position_x = poisk(mas, n, x);

    if (position_x >= 0) {
        printf("\nPositziya elementa x:%d", position_x);
    } else {
        printf("\nElement ne znayden");
    }
       
}
