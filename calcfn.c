#include<stdio.h>
void addition(int a, int b)
{ 
    int sum = a + b;
    printf("sum of %d and %d = %d", a, b, sum);
}
void subtraction(int a, int b)
{
    int sub = a - b ;
    printf("diff of %d and %d = %d",a,b,sub);
}
void multiplication(int a, int b)
{
    int mul  = a * b;
    printf("pdct of %d and %d = %d",a,b,mul);

}
void division(int a, int b)
{
  
 
 if (b < 0 )
 
 printf("div of %d and %d = %d", a,b,a / b);
 else
 printf("div of zero not possible");


}
int main ()
{
    int a ,b,ch;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        addition(a,b);
        break;
        case 2:
        subtraction(a,b);
         break;
        case 3:
        multiplication(a,b);
         break;
        case 4:
        division(a,b); 
        break;
        default:
        printf("invalid option");
        break;

    }
    return 0;

}



   