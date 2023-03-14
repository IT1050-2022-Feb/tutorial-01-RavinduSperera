/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

//function main begins
int main()
{
  //declaring variables 
  int x; //x-countable variable 
  int num, sum = 0; //(n- number);

  //gethering the user inputs 
  printf("Enter 'n' Value: ");
  scanf("%d", &num);

  for(int x=1; x<=num; ++x)
    {
      sum += x;
    }

  //displyaing the final answer on the screen
  printf("Sum of these numbers = %d", sum);
  
  return 0;
  
}//function main ends

