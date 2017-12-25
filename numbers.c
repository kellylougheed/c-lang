/*****************************************************
* filename: numbers.c
* Exercise: Module 2, Exercise 1
* Name: Kelly Lougheed
* Date Created: October 29, 2017
*
* Description: This program prints the numbers 1 to 10.
******************************************************/

#include <stdio.h>
int main(void) {
  int i = 0;
  while (++i <= 10) { // Prefix operator makes i starts at 1 and go to 10
    printf("%d\n", i); // Print every number on a new line
  }
  return 0;
}
