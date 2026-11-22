// Sample Output 1:
// Enter max lines: 4
// A
// B C
// D E F
// G H I J
// Enter max lines: 6
// A
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U
#include <stdio.h>
int main(){
    int num;
    printf("Enter max lines: ");
    scanf("%d",&num);
    char ch='A';
    for(int i=1;i<=num;i++){
      for(int j=1;j<=i;j++){
        printf("%c ",ch);
        ch++;
      }
      printf("\n");
    }


    return 0;
}