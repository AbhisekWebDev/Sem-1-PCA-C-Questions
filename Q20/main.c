#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
     printf("Enter the number of Fibonacci numbers to generate: ");
     scanf("%d", &n);
     if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
     }
     int first = 0, second = 1, next, i;
     printf("Fibonacci Series: %d %d", first, second);
     for (i = 2; i < n; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
     }
    return 0;
}
