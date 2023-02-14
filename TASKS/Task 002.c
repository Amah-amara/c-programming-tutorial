/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/

#include <stdio.h>

int main()
{
  int score;
  
  printf("enter your score: ");
  scanf("%d", &score);
  
  if (score < 80)
    {
    printf("you are not eligible to enrol");
  }
  
  else if (score >= 80)
    {
    printf("you are eligible to enrol");
  }
  return 0;
 }
