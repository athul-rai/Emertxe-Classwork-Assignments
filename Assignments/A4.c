// Description:
// • In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum).
// • Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).
// Example:
// • The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6. Equivalently, the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6
// • The next perfect number is 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128
// Pr-requisites:-
// • Loops
// • Operators
// Objective: -
// • To understand the concept of
// •  If-else constructs
// Inputs: -
// A positive integer say 'N'.
// Sample execution: -
// Test Case 1:
// Enter a number: 6
// Yes, entered number is perfect number
// Test Case 2:
// Enter a number: 10
// No, entered number is not a perfect number
// Test Case 3:
// Enter a number: -1
// Error : Invalid Input, Enter only positive number
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Invalid Input, Enter only positive number");
    }
    else{
        int sum=0;
        for(int i=1;i<=num-1;i++)
        {
            if(num%i==0){
                sum+=i;
            }
        }
        if(num==sum)
        {
            printf("Yes, entered number is perfect number");
        }
        else
        {
            printf("No, entered number is not a perfect number");
        }
    }


    return 0;
}