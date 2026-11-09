// WAP to Find average of 3 float values
// Program should read 3 float values from user and print their average.

// Sample executions :
// Test case 1:
// Input : 25.7 1.1 28.2
// Output : 18.333333

#include <stdio.h>
int main(){
    float num1,num2,num3,avg;
    scanf("%f %f %f",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("%f",avg);
    return 0;
}