#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n----- Bitwise operations Menu -----\n");
    printf("1. AND (&)\n");
    printf("2. OR (|)\n");
    printf("3. XOR \n");
    printf("4. NOT (~) on first no \n");
    printf("5. Left Shift (<<)\n");
    printf("6. Right Shift (>>)\n");
    printf("Enter your choice: ");

    scanf("%d",&choice);
    switch(choice)
    
        case 1:
            printf("Result = %d\n",  a & b);
            break;
        case 2:                 
            printf("Result = %d\n", a | b);
            break;
        case 3:
            printf("Result = %d\n",a ^ b);
            break;
        case 4:
            printf("Result  = %d\n",  ~a);
            break;
        case 5:
        printf("enter no of positions to shift:");
        scanf("%d",&b);
            printf("Result = %d\n", a << b);
            break;
        case 6:
        printf("enter no of positions to shift:");
        scanf("%d",&b);
            printf("Result  %d\n" a >> b);
            break;
        default:
            printf("Invalid choice\n");     

    }
    return 0;        
}

