/************************************************
* filename: ampersand.c
* Exercise: Module 3, Exercise 1
* Name: Kelly Lougheed
* Date Created: October 30, 2017
*
* Description: This program displays six lines of
* ampersands increasing by one each time.
*************************************************/

#include <stdio.h>
int main(void) {
  int i, j;
  for (i = 1; i < 7; i++) {
    // Print the number of ampersands corresponding to the iteration i
    for (j = 1; j <= i; j++) {
      printf("&");
    }
    printf("\n");
  }
  return 0;
}
