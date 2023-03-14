/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mar1; 
  int mar2;
  float avg;

  printf ("Enter your marks");
  scanf("%d",&mar1);
  printf("Enter your other mark");
  scanf("%d",&mar2);

  avg= ((float)(mar1+mar2)/2);
  printf("your average is%f",avg);
  
  
  return 0;
}

