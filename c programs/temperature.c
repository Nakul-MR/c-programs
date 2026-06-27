#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temprature in celsius");
    scanf("%f",&c);
    f = (c * 9/5) + 32;
    printf("temprature in fahrenheit = %.2f",f);
}