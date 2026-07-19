#include<stdio.h>
int main()
{
    int n,i;
    int a[10];
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter value of a[%d]",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;

}
