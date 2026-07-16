#include<stdio.h>
int main()
{
    int num,a,l=0,s,original;
    printf("enter a number:");
    scanf("%d",&num);
    s = num;
    original=num;
    while(num> 0)
    {
        a = num%10;
        l++;
        num = num/10;

    }
    printf("length=%d",l);
return 0;


}