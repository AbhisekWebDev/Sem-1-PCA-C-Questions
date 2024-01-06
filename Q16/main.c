#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial = 1;
     printf("Enter a number: ");
     scanf("%d", &num);

     if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
     } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("The factorial of %d is: %d\n", num, factorial);
     }

     getch();
    return 0;
}
