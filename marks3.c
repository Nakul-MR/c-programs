#include <stdio.h>

int sum ;


extern int totalMarks;

void findSum(int, int, int);
void findAverage();


int totalMarks = 300;

int main()
{
    
    int mark1, mark2, mark3;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    findSum(mark1, mark2, mark3);
    findAverage();

    return 0;
}


void findSum(int m1, int m2, int m3)
{
    sum = m1 + m2 + m3;
    printf("\nTotal Marks Obtained = %d", sum);
}


void findAverage()
{
    static int count = 0;   
    float avg;

    avg = (float)sum / 3;
    count++;

    printf("\nAverage Marks = %.2f", avg);
    printf("\nMaximum Marks = %d", totalMarks);
    printf("\nResult displayed %d time(s).\n", count);
}