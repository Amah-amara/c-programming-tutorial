/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

#include <stdio>

void main()
{
  char letter;
  
  for (letter = 'a'; letter <= 'z'; letter++)
  {
    printf("%c ", letter)
  }
  printf("\n");
}
