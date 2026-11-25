// Description:

// Read a number from user. Let's say if number is 5, you need to print numbers in X pattern as shown below:
// If n = 5, then,
// 1___5
// _2_4_
// __3__
// _2_4_
// 1___5
// Note:- Please consider '_' as space. 

// Pre-requisites:
// Loops
// Inputs:
// Read an Integer 'n' from the user
// Sample Output:
// Test Case 1:
// Enter the number: 4
// 1  4
//  23
//  23
// 1  4

// Test Case 2:
// Enter the number: 5
// 1   5
//  2 4
//   3
//  2 4
// 1   5
#include <stdio.h>
int main(){
    int i,j;
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(j=1;j<=num;j++)
        {
            if(i==j){
                printf("%d",i);
            }
            else if(j==num-i+1)
            {
                printf("%d",j);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}