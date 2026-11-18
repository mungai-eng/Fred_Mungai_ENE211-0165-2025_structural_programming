#include <stdio.h>
#include <stdlib.h>

void main()
{
int arry[1000];
int num, i, j, tmp;

printf("Input size of array : ");
scanf("%d", &num);

printf("Input %d elements in the array :\n", num);
    for (i = 0; i < num; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arry[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (arry[j] < arry[i])
            {
                tmp = arry[i];
                arry[i] = arry[j];
                arry[j] = tmp;
            }
        }
    }
    printf("Elements of array in ascending order:\n");
    for (i = 0; i < num; i++)
    {
        printf("%d  ", arry[i]);
    }
}

