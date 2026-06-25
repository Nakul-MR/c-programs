#include<stdio.h>
int main()
{
    float l,b,area,perimeter;
    printf("enter lengh and breadth of rectangle");
    scanf("%f%f",&l,&b);
    area = l * b;
    perimeter = 2 * l + b ;
    printf("area = %.2f",area);
    printf("perimeter = %.2f",perimeter);
    return 0;

}