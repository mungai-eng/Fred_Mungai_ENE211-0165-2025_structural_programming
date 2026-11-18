#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arry[50], i, num, p, m;

printf("Input the size of array : ");
scanf("%d", &num);

printf("Input %d elements in the array in ascending order:\n", num);
    for (i = 0; i < num; i++)
        {
        printf("element - %d : ", i);
        scanf("%d", &arry[i]);
        }

printf("Input the value to be inserted : ");
scanf("%d", &m);

printf("Input the Position, where the value to be inserted :");
scanf("%d", &p);

printf("Former list of the array :\n");
    for (i = 0; i < num; i++)
        printf("% 5d", arry[i]);

    for (i = num; i >= p; i--)
        arry[i] = arry[i - 1];

    arry[p - 1] = m;

printf("the new list is :\n");
    for (i = 0; i <= num; i++)
        printf("% 5d", arry[i]);
}
