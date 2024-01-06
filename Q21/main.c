#include <stdio.h>
#include <stdlib.h>

// Armstrong number is a number that is equal to the sum of cubes of its digits.
// For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

int main()
{
    int number, originalNumber, remainder, n = 0, result = 0;
     printf("Enter a number: ");
     scanf("%d", &number);
     originalNumber = number;
     while (originalNumber != 0) { // Count the number of digits
        originalNumber /= 10;
        ++n;
     }
     originalNumber = number;
     // Check if the number is Armstrong
     while (originalNumber != 0) {
        remainder = originalNumber % 10;
        // Calculate power of remainder using multiplication
        int temp = 1;
        for (int i = 0; i < n; ++i) {
            temp *= remainder;
        }
        result += temp;
        originalNumber /= 10;
     }
     if (result == number)
        printf("%d is an Armstrong number", number);
     else
        printf("%d is not an Armstrong number", number);
    return 0;
}
