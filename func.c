#include<stdio.h>
void forward (int n)
{
    int i;
    i=1;
    while(i<=n)
    {
        printf("%d",i);
        i = i+1;

    }
}
void backward (int n)
{
    int i;
    i=n;
    while(i>=1)
    {
        printf("%d",i);
        i = i-1;

    }

}
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    forward(num);
    backward(num);
    return 0;

}

