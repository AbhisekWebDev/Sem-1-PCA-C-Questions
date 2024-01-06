#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

     printf("Enter 1st no. : ");
     scanf("%d", &a);
     printf("Enter 2nd no. : ");
     scanf("%d", &b);

     if(a > b)
        printf("The greater no. is : %d", a);
     else
        printf("The greater no. is : %d", b);

     getch();
    return 0;
}
