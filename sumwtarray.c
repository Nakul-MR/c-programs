#include<stdio.h>
int main()
{
    int n, i = 1, num, sum = 0;
    printf(" enter the value of n:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("enter the number %d:", i);
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }
    printf("sum = %d", sum);
    return 0;   
}