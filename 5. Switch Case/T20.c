/*
Description:
Read a character from the user and use switch-case range checking
to determine whether it is an uppercase letter (A-Z), lowercase
letter (a-z), digit (0-9), or neither an alphabet nor a digit.

Sample Execution 1:
Enter a character: A
Character is Uppercase

Sample Execution 2:
Enter a character: d
Character is Lowercase

Sample Execution 3:
Enter a character: 5
Character is a digit

Sample Execution 4:
Enter a character: &
Not an alphabet or digit

Sample Execution 5:
Enter a character: z
Character is Lowercase
*/ 
#include <stdio.h>
int main(){
    char ch;
    //printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch){
        case 'A'...'Z':
        printf("Character is Uppercase");
        break;
        case 'a'...'z':
        printf("Character is Lowercase");
        break;
        case '0'...'9':
        printf("Character is a digit");
        break;
        default:
        printf("Not an alphabet or digit");
        break;
        
    }
    return 0;
}