#include <stdio.h>
#include <stdlib.h>

int main()
{

int a[100];
int value,num;
int sum = 0;

printf("Input the number of elements to be stored in the array :");
scanf("%d", &num);
printf("Input %d elements in the array :\n", num);
    for (value = 0; value < num; value++)
        {
        printf("element - %d : ", value);
        scanf("%d", &a[value]);
        }
    for (value = 0; value < num; value++)
        {
        sum += a[value];
        }
printf("Sum of all elements stored in the array is : %d\n\n", sum);

    return 0;
}
