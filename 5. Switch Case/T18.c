/*
Description:
Read two numbers and an arithmetic operator (+, -, *, /) from the user.
Use a switch case to perform the corresponding operation and display the result.
Display "Invalid operation!" for an unsupported operator.

Sample Execution 1:
Enter number1, operator and number2: 10 * 7
Output: 70

Sample Execution 2:
Enter number1, operator and number2: 20 + 5
Output: 25

Sample Execution 3:
Enter number1 operator and number2: 12 $ 6
Invalid operation!
*/
#include <stdio.h>
int main(){
    int num1,num2;
    char operator;
    //printf("Enter the number:\n");
    scanf("%d %c %d", &num1, &operator, &num2);
    switch(operator){
        case '+':
        printf("%d\n",num1+num2);
        break;
        case '-':
        printf("%d\n",num1-num2);
        break;
        case '*':
        printf("%d\n",num1*num2);
        break;
        case '/':
        printf("%d\n",num1/num2);
        break;
        default:
        printf("Invalid operation!");
    }
    return 0;
}