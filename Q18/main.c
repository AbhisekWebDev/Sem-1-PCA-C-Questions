#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num, rev = 0, rem;
     printf("Enter a number: ");
     scanf("%d", &num);

     while (num != 0) {
         rem = num % 10; // Get the last digit of num
         rev = rev * 10 + rem; // Append the last digit to reversed num
         num /= 10; // Remove the last digit from num
     }
     printf("The reverse of the number is: %d\n", rev);

     getch();

    return 0;
}
