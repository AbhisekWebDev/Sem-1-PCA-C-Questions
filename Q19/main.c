#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0, digit;
     printf("Enter a number: ");
     scanf("%d", &num);

     while (num > 0) {
         digit = num % 10; // Extract the last digit
         sum += digit; // Add the extracted digit to the sum
         num /= 10; // Remove the last digit
     }
     printf("The sum of the digits of the number is: %d\n", sum);

     getch();

    return 0;
}
