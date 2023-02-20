/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 != 0)
    {
        printf("This number is odd");
    }
    else 
    {
        printf("This number is even");
    }
    return 0;
}
