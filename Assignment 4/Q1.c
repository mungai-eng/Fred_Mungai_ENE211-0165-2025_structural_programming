#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int values[1000];
int numbr;
//ask for  the no. ofelements
printf("Input number of elements to be stored:  ");
scanf("%d", &numbr);

printf("Input %d number of elements in the array :\n", numbr);
   for (i = 0; i < numbr; i++)
   {
      printf("element - %d : ", i);
      scanf("%d", &values[i]);
   }

   printf("\n\nThe values stored in the array in reverse are :\n");
   for (i = numbr - 1; i >= 0; i--)
        {
        printf("% 5d", values[i]);
        }
return 0;
}
