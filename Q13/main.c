#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1, sum = 0;
     printf("Enter the value of n: ");
     scanf("%d", &n);
     while (i <= n) {
        sum += i;
        i++;
     }
     printf("The sum of first %d numbers is: %d\n", n, sum);

     getch();
    return 0;
}
