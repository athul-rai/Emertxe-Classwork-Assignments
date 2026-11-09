// Write a C program to calculate the simple interest for a given principal amount, rate of interest, and time period.

// Instructions:
// Prompt the user to enter the principal amount, rate of interest, and time period in years.
// Calculate the simple interest using the formula: Simple Interest = (Principal Amount * Rate of Interest * Time) / 100.

#include <stdio.h>

int main(){
    
    float principal,rate,time,simple_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period in years: ");
    scanf("%f", &time);
    
    simple_interest=(principal * rate * time)/100;
    printf("%g", simple_interest);
    
    
    
    return 0;
}