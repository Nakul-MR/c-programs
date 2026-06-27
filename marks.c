#include<stdio.h>
int main ()
{
    int  s1,s2,s3,s4,s5;
    int total, avg;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total = s1 + s2 + s3 + s4 + s5;
    avg= total / 5;
    switch ( avg/ 10) 
    {
        case 10:
        case 9:
            printf("Grade: A+");
            break;
        case 8:
            printf("Grade: An");
            break;
        case 7:
            printf("Grade: B+");
            break;
        case 6:
            printf("Grade: B");
            break;
        case 5:
            printf("Grade: C+");
            break;
        case 4:
            printf("Grade: fail");
    }
    
    return 0;
}