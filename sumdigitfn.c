#include<stdio.h>
int sum (int a)
{
    int sum = 0,n,num;
    num=a;
    while(a>0)
    {
        n=a%10;
        sum=sum+n;
        a=a/10;
    }
    printf("sum of digits of %d = %d", a, sum);
}
int main()
{
    int a;
    printf(" enter a  number:");
    scanf("%d",&a);
    sum(a);
    return 0;

}