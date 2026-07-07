#include<stdio.h>
void factorial (int a)
{
    int n, fact=1;
    for(n=1;n <= a;n++)
    fact = fact*n;
    printf("fact of %d = %d",a,fact);



}
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    factorial(a);
    return 0;
}