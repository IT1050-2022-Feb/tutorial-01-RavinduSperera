/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main begins
int main() 
{
  //declaring variables
  float num1, num2;
  float avg = 0;

  //gethering user inputs 
  printf("Enter the First Number: ");
  scanf("%f", &num1);
  printf("Enter the Second Number: ");
  scanf("%f", &num2);

  //equation 
  avg = (num1 + num2) / 2.0;

  //displaying the final answer
  printf("Average = %.2f", avg);
  
  return 0;
  
}//function main ends

