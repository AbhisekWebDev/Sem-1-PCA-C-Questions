#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1;
     printf("Enter the number : ");
     scanf("%d", &n);
     while(i <= n) {
        printf("%d \n", i);
        i++;
     }
     getch();
    return 0;
}
