// Description : 

// You have to read a number from user, print the number is palindrome or not

// Sample Execution : 

// Test case 1 : 

// Enter the number : 121

// The Entered number is an palindrome.

// Test case 2 :

// Enter the number : 1234

// The Entered number is not an palindrome.

#include <stdio.h>
int main()
{
    int digit,num,rev=0;
    printf("Enter the number :");
    scanf("%d",&num);
    int copy=num;
    while(num>0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(rev==copy){
        printf("The Entered number is an palindrome.");
    }
    else{
        printf("The Entered number is not an palindrome.");
    }
    
    return 0;
}