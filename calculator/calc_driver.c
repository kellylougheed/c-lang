/************************************************
* filename: calc_driver.c
* Exercise: Module 6, Exercise 4
* Name: Kelly Lougheed
* Date Created: November 26, 2017
*
* Description: This adds or subtracts two numbers
* input by the user.
*************************************************/

#include "stdio.h"
#include "addition.h"
#include "subtraction.h"

int main(void) {

  // Two user inputs and the answer
  float a, b, answer;
  // User will indicate addition or subtraction with a character
  char operation;

  printf("Enter two numbers: ");
  scanf("%f %f", &a, &b);

  printf("Enter 'a' to add the numbers and 's' to subtract the second number from the first: ");
  while (getchar() != '\n') {
    continue;
  }
  scanf("%c", &operation);

  // Check for corresponding uppercase characters as well
  if (operation == 'a' || operation == 'A') {
    answer = add(a, b);
    printf("The answer is %.1f.\n", answer);
  } else if (operation == 's' || operation == 'S') {
    answer = subtract(a, b);
    printf("The answer is %.1f.\n", answer);
  } else {
    printf("Sorry, I don't understand that input.\n");
  }

  return 0;
}
