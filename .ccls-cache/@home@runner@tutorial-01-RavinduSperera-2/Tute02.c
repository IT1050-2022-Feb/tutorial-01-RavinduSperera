/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

//function main begins
int main() 
{
  //declaring user inputs 
  int dis;   //dis- distance, amo- amount(variables)
  float amo;

  //gethering user inputs 
  printf("Enter the Distance: ");
  scanf("%d", &dis);

  if(dis <= 30) //distance less than or equal to 30kms
  {
    amo = dis * 50.0;
    printf("Pay %.2f /= as the rent", amo);
  }

  else if(dis >= 30) //distance grater than or equal to 30kms
  {
    amo = dis * 50.0 + (50 - dis) * 40.0;
    printf("Pay %.2f/= as the rent", amo);
  }

  else
  {
    printf("Invalid Input\n");
  }
  
  return 0;
  
}//function main ends 
