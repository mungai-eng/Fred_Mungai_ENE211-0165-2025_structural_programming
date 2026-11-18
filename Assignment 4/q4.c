#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arry[1000];
    int i;
    int max;
    int min;
    int num;

printf("Input the number of elements to be stored in the array :");
scanf("%d", &num);

printf("Input %d elements in the array :\n", num);
    for (i = 0; i < num; i++)
        {
        printf("element - %d : ", i);
        scanf("%d", &arry[i]);
        }
    max = arry[0];
    min = arry[0];

    for (i = 1; i < num; i++)
    {

        if (arry[i] > max)
        {
            max = arry[i];
        }

        if (arry[i] < min)
        {
            min = arry[i];
        }
    }
printf("Maximum is : %d\n", max);
printf("Minimum is : %d\n", min);
    return 0;
}
