// Description : 

// You have to print the below pattern

// Sample Execution : 

// Test case 1 : 

// Enter n value: 3

//           *

//         * * *

//       * * * * * 

//         * * *
 
//           *
#include <stdio.h>
int main(){
      int n;
      printf("Enter n value: ");
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
      for(int i=1;i<n;i++){
        for(int j=1;j<=2*i;j++){
            printf(" ");
        }
        for(int j=1;j<=2 * (n - i) - 1;j++){
            printf("* ");
        }
        printf("\n");
      }

    return 0;
}
