#include<stdio.h>
int main() {
    float num1, num2,result = 0,memory = 0;
    char optr;
    int choice;
    printf("Enter first NO:");
    scanf("%f",&num1);
    printf("Enter operator (+,-,*,/):");
    scanf(" %c",&optr);
    printf("Enter second NO:");
    scanf("%f",&num2);
    switch(optr) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
            printf("division not possible\n");
            break;
            case'%':
            printf("Result =  % d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Invalid operator\n");   
            return 0;
            

    }
    printf("memory options:\n");
    printf("1. MS (Memory Store)\n");
    printf("2. MR (Memory Recall)\n");
    printf("3. MS+ (add result to memory)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            memory = result;
            printf("memory  stored = %.2f\n", memory);
            break;
        case 2:
            printf("memory recall = %.2f\n", memory);
            break;
        case 3:
            memory += result;
            printf("memory after MS+ = %.2f\n", memory);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}