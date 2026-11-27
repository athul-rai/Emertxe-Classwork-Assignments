// Pre-requisites:

// Loops
// Arithmatic operators
// Conditional constructs
// Objective:

// To understand the concept of
// Loops (Exit points of loops)
// Conditional constructs
// Requirements:

// Read a number from user.
// Check the number is prime or not using loops and display the output.

// Sample Execution:

// Test case 1: 
// user@emertxe]./prime_or_not
// Enter a number: 2
// 2 is a prime number

// Test case 2: 
// user@emertxe]./prime_or_not
// Enter a number: 4
// 4 is not a prime number

// Test case 3: 
// user@emertxe]./prime_or_not
// Enter a number: 101
// 101 is a prime number

// Test case 4: 
// user@emertxe]./prime_or_not
// Enter a number: 47
// 47 is a prime number

// Test case 5: 
// user@emertxe]./prime_or_not
// Enter a number: -2
// Invalid input

// Test case 6: 
// user@emertxe]./prime_or_not
// Enter a number: 25
// 25 is not a prime number

// Test case 7: 
// user@emertxe]./prime_or_not
// Enter a number: 2089
// 2089 is a prime number
#include <stdio.h>

int main()
{
    int num;
    //printf("Enter a number:");
    scanf("%d",&num);
    int flag=0;
    if(num<2)
    {
        printf("Invalid input\n");
    }
    else{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==1)
        {
            printf("%d is not a prime number\n",num);
        }
        else
        {
            printf("%d is a prime number\n",num);
        }
    }
   return 0;
}