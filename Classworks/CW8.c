// Description : 

// - Read total (n) number of pattern chars in a line (number should be “odd”)

// - Read number (m) of pattern char to be printed in the middle of line (“odd” number)

// - Print the line with two different pattern chars

// - Example – Let's say two types of pattern chars '$' and '*' to be printed in a line. Total number of chars to be printed in a line are 9. Three '*' to be printed in middle of line.

// Sample Execution : 

// Test case 1 : 

// Enter n : 9

// Enter m : 3

// $$$***$$$
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter m : ");
    scanf("%d",&m);
    for(int i=0;i<(n-m)/2;i++)
    {
        printf("$");
    }
    for(int i=0;i<m;i++)
    {
        printf("*");
    }
    for(int i=0;i<(n-m)/2;i++)
    {
        printf("$");
    }



    return 0;
}

