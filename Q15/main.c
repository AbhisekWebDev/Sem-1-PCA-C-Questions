#include <stdio.h>
#include <stdlib.h>

int main()
{
    int range, sum = 0;

     printf("Enter the range: ");
     scanf("%d", &range);
     for (int i = 1 ; i <= range ; i++) {
        if (i % 2 == 0) {
        sum += i;
        }
     }

     printf("The sum of even numbers in the range is : %d\n", sum);

     getch();

    return 0;
}
