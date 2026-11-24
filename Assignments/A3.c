// Description:
// • In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . . OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
// • By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the sum of the previous two
// Pr-requisites:-
// • Loops
// • Operators
// Objective: -
// To understand the concept of
// ◦ Continuos looping.
// ◦ If-else constructs
// Inputs: -
// A integer say 'N' 
// Sample execution: -
// Test Case 1 :
// user@emertxe] ./fibbonacci_series
// Enter a number: 8
// 0 1 1 2 3 5 8
// Test Case 2:
// Enter a number: 10
// 0 1 1 2 3 5 8
// Test Case 3:
// Enter a number: 21
// 0 1 1 2 3 5 8 13 21
// Test Case 4:
// Enter a number: -21
// Invalid input
#include <stdio.h>
int main(){
      int num;
      printf("Enter a number: ");
      scanf("%d",&num);
      int initial=0;
      int next=1;
      int sum=0;
      if(num<0){
        printf("Invalid input");
      }
      else{
      printf("%d ",initial);
      if(num>0){
      printf("%d ",next);

        while(sum<=num){
            sum=initial+next;
            if(sum<=num){
            printf("%d ",sum);
            initial=next;
            next=sum;
            }
        }
      }
    }
    return 0;
}

//In emertxe assignment simpler code is used which is 
/*Athul Rai K
2/9/26
Fibonacci numbers
input: 8
output:0 1 1 2 3 5 8 */
// #include <stdio.h>
// int main(){
//     int limit;
//     int f=0,s=1, n=0;
//     printf("Enter a number: ");
//     scanf("%d",&limit);
//     if(limit<0){
//         printf("Invalid input");
//     }
//     else{
//         while(n<=limit){
//             printf("%d ",n);
//             f=s;
//             s=n;
//             n=f+s;
//         }
//     }
    
    
    
//     return 0;
// }