// WAP to Print direction based on input char (N/S/E/W/n/s/e/w)

// Sample Execution 1:

// Enter direction: N
// North
// Sample Execution 2:

// Enter direction: W
// West
// Sample Execution 3:
// Enter direction: X
// Invalid input
#include <stdio.h>
int main(){
    char dir;
    printf("Enter direction:");
    scanf("%c", &dir);
    switch(dir){
        case 'n':
        case 'N':
        printf("North");
        break;
        case 's':
        case 'S':
        printf("South");
        break;
        case 'e':
        case 'E':
        printf("East");
        break;
        case 'w':
        case 'W':
        printf("West");
        break;
        default :
        printf("Invalid input");
        
    }   
    
    
    return 0;
}