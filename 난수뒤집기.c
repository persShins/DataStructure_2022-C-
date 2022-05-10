#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

main()
{
    int ary[max] = { 0,1 };
    int temp = 0;
    srand(time(NULL));

    for (int i = 0; i < max; i++)
    {
        ary[i] = rand();
        printf("%d\n", ary[i]);
    }

    printf("\n");

    for (int j = 0; j < max; j++)
    {
        temp = ary[j];
        ary[j] = ary[9 - j];
        ary[9 - j] = temp;
    }
   
    for (int t = 0; t < max; t++)
    {
        printf("%d\n", ary[t]);
    }
}