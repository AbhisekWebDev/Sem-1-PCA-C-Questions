#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1;

     printf("Enter the number : ");
     scanf("%d", &n);

     while(i <= n) {

         if(i % 2 != 0)
            printf("The odd number : %d \n", i);

         i++;
     }

     getch();

    return 0;
}
