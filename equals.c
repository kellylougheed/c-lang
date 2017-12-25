/************************************************
* filename: equals.c
* Exercise: Module 4, Exercise 1
* Name: Kelly Lougheed
* Date Created: November 6, 2017
*
* Description: This program takes in some text,
* an equals sign, and an integer, and prints the
* integer entered after the equals sign.
*************************************************/

#include <stdio.h>
int main(void) {
  printf("Enter some text, equal sign and an integer: ");
  int integer;
  // Ignore characters until the equals sign
  while (getchar() != '=') {
    continue;
  }
  scanf("%d", &integer);
  printf("The integer you entered is: %d\n", integer);
  return 0;
}
