#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

     printf("Enter 1st angle : ");
     scanf("%d", &a);
     printf("Enter 2nd angle : ");
     scanf("%d", &b);
     printf("Enter 3rd angle : ");
     scanf("%d", &c);

     if (a + b + c != 180 || a <= 0 || b <= 0 || c <= 0 || a >= 180 || b >= 180 || c >= 180)
        printf("The triangle is not valid \n");
     else
        printf("The triangle is valid");

     getch();
    return 0;
}
