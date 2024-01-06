#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num, isPrime = 1;
     printf("Enter a number: ");
     scanf("%d", &num);
     for(int i = 2; i <= num / 2; i++) {
         if (num % i == 0) {
            isPrime = 0;
            break;
         }
     }
     if(isPrime)
        printf("%d prime");
     else
        printf("not prime");

     getch();

     return 0;
}
