#include <stdio.h>
#include <stdlib.h>

/*
Basic salary <= 10000 : HRA = 20%, DA = 80%
Basic salary <= 20000 : HRA = 25%, DA = 90%
Basic salary > 20000 : HRA = 30%, DA = 95%
*/

int main()
{
    float sal, hra, da, gsal;
     printf("Enter your basic salary: ");
     scanf("%f", &sal);
     if (sal <= 10000) {
         hra = (sal * 20) / 100;
         da = (sal * 80) / 100;
     } else if (sal <= 20000) {
         hra = (sal * 25) / 100;
         da = (sal * 90) / 100;
     } else {
         hra = (sal * 30) / 100;
         da = (sal * 95) / 100;
     }
     gsal = sal + hra + da;
     printf("Your gross salary is %f", gsal);
     getch();
    return 0;
}
