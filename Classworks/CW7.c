// Description : 

// You have to print the below pattern.

// Sample Execution : 

// Test case 1 : 

// Enter n : 4

//       *

//     * * *

//   * * * * *

// * * * * * * *

#include <stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*(n-i);j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}