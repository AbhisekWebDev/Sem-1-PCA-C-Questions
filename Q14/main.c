#include <stdio.h>
#include <stdlib.h>

int main()
{
    int range;
     printf("Enter the range: ");
     scanf("%d", &range);
     for (int i = 1 ; i <= range ; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
        printf("%d\n", i);
        }
     }
     getch();
    return 0;
}
