#include<stdio.h>
 int n;
int a[10];
void read_array()
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("enter value of a[%d]",i);
scanf("%d",&a[i]);  
}
}
void disp_array()
{
    int i;
 for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}
int main()
{
int i;
printf("enter n");
    scanf("%d",&n);
read_array();
disp_array();

    printf("enter n");
    scanf("%d",&n);

return 0;

}
