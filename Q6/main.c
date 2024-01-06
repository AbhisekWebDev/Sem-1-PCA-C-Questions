#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
     printf("Enter a number: ");
     scanf("%d", &a);
     if (a % 5 == 0 && a % 11 == 0)
        printf("The number %d is divisible by 5 and 11.\n", a);
     else
        printf("The number %d is not divisible by both 5 and 11.\n", a);
     getch();
    return 0;
}
