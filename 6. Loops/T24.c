// WAP to Print Simple Triangle Star Pattern
// Comment the prompting messages printf statements.
// Ex: //printf("Enter the number:\n");
// Program execution sample:
// Sample Output 1:
// Enter max lines: 4
// *
// **
// ***
// ****
// Enter max lines: 6
// *
// **
// ***
// ****
// *****
// ******
#include <stdio.h>
int main(){
    int num;
    printf("Enter max lines : ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
       printf("\n");
    }


    return 0;
}