/*
 Write a program in C to find the square of any number
using the function.
*/

#include <stdio.h>
#include <math.h>

double sqNum(int);

int main()
{
    double num;
    double result = 0.0;
    
   
    printf("enter a number: ");
    scanf("%lf", &num);
    
    result = sqNum(num);
    printf("the square of %lf is %0.2lf", num, result);
    
    return 0;
    
}

double sqNum(int var)
{
    if (var == 0)
    {
    printf("not a valid number\n");
    }
    else
    {
    return pow(var, 2);
    }
}
