#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, temp, hcf, lcm;
     printf("Enter first number: ");
     scanf("%d", &num1);
     printf("Enter second number: ");
     scanf("%d", &num2);

     // Finding HCF
     int a = num1;
     int b = num2;
     while (b != 0) {
     temp = b;
     b = a % b;
     a = temp;
     }
     hcf = a; // HCF is stored in 'hcf'

     // Finding LCM
     lcm = (num1 * num2) / hcf; // formula
     printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);
     printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
