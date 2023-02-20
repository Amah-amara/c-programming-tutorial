/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

#include <stdio.h>

void main()
{
  char letter;
  
  for (letter = 'A'; letter <= 'Z'; letter++)
  {
    printf("%c ", letter);
  }
  printf("\n");
}
