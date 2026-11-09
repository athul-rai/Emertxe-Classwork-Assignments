/*
Name: Athul Rai K

Description:
Write a C program to read a temperature in Fahrenheit from the user
and convert it into Celsius using the formula:

celsius = (fahrenheit - 32) * 5 / 9

Declare fahrenheit as an integer and celsius as a float.
Display the converted temperature in Celsius.
*/

#include <stdio.h>

int main()
{
    int fahrenheit;
    float celsius;

    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%f\n", celsius);

    return 0;
}