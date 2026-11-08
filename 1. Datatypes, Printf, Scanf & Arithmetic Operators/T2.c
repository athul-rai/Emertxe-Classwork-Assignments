// WAP to find sum of 2 integers.
// Program should read two integers from user and print the sum.

// Sample executions :
// Input    : 7 1
// Output : sum=8

#include <stdio.h>

int main()
{
    int num1,num2,sum;
    scanf("%d %d", &num1,&num2);
    sum= num1+num2;
    printf("sum=%d",sum);
    return 0;
}