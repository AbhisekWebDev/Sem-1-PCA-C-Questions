#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;

    printf("Enter the radius : ");
    scanf("%d", &r);

    // formulas
    float area = 3.14159 * r * r;
    float perimeter = 2 * 3.14159 * r;

    printf("the area of a circle is : %f \n", area);
    printf("The perimeter of a circle is : %f", perimeter);
    getch();
    return 0;
}
