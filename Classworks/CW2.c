// Description : 
// You have to read a n value from user and print n power of two series. 
// Sample Execution : 
// Test case 1 : 
// Enter the number : 5
// 1 2 4 8 16
// Test case 2 :
// Enter the number : 10
// 1 2 4 8 16 32 64 128 256 512
// Test case 3 :
// Enter the number : -10
// Error : Number should be an positive number.
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int prod=1;
    for(int i=1;i<=num;i++){
        printf("%d",prod);
        prod=prod*2;
    }
    return 0;
}