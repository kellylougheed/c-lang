/************************************************
* filename: calc.c
* Exercise: Module 1, Exercise 2
* Name: Kelly Lougheed
* Date Created: October 26, 2017
*
* Description: This program performs and prints
* mathematical operations on a number.
*************************************************/

#include <stdio.h>
int main(void) {
  int number = 10;
  // Multiply 10 by 2 and print the result
  int multiplied = number * 2;
  printf("Number times 2: %d \n", multiplied);
  // Divide 10 by 2 and print the result
  int divided = number/2;
  printf("Number divided by 2: %d \n", divided);
  // Add 2 to 10 and print the result
  int added = number + 2;
  printf("Number plus 2: %d \n", added);
  // Subtract 2 from 10 and print the result
  int subtracted = number - 2;
  printf("Number minus 2: %d \n", subtracted);
  // Square the number and print the result
  int squared = number * number;
  printf("Number squared: %d \n", squared);
  return 0;
}
