#include <stdio.h>
#include <stdlib.h>

int main()
{
int arry[1000], num, ctr = 0;
int i, j, k;
printf("Input the number of elements to be stored:   ");
scanf("%d", &num);
printf("Input %d elements in the array :\n", num);
    for (i = 0; i < num; i++)
        {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
        }
printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < num; i++)
    {
        ctr = 0;
        for (j = 0, k = num; j < k + 1; j++)
        {

            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d ", arr1[i]);
        }
    }
return 0;
}
