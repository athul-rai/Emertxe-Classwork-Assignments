// Write a C program to print greetings based on time

// The program prompts the user to enter hour (0-23).
// It then reads the input number using scanf.
// The program greets them based on the time using the "if-else if" statement.
// Determine the corresponding greets based on the following ranges         
// Good morning    :  5 - 11     
// Good  afternoon : 12 - 15
// Good evening     : 16 - 21
// Good night         :  22 - 4
// Invalid hour       :   greater than 23
// Program execution sample:

// Sample Output 1:
// Enter the hour (0-23): 7
// Good morning!
// Sample Output 2:
// Enter the hour (0-23): 15
// Good afternoon!
// Sample Output 3:
// Enter the hour (0-23): 20
// Good evening!

// Sample Output 4:
// Enter the hour (0-23): 30
// Invalid hour! 

// Sample Output 5:
// Enter the hour (0-23): 22
// Good night!

#include <stdio.h>
int main(){
    int num;
    printf("Enter the hour (0-23): ");
    scanf("%d", &num);
    if(num>=5&&num<=11)
    {
        printf("Good morning!");
    }
    else if(num>=12&&num<=15){
        printf("Good afternoon!");
    }
    else if(num>=16&&num<=21){
        printf("Good evening!");
    }
    else if((num >= 22 && num <= 23) || (num >= 0 && num <= 4))
    {
    printf("Good night!");
    }
    else{
        printf("Invalid hour!");
    }


    return 0;
}