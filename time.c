/************************************************
* filename: time.c
* Exercise: Module 2, Exercise 3
* Name: Kelly Lougheed
* Date Created: October 29, 2017
*
* Description: This program converts a user-input
* number of seconds to hours and minutes.
*************************************************/

#include <stdio.h>
int main(void) {
  int input;
  do {
    printf("Enter a number of seconds (or 0 to exit): ");
    scanf("%d", &input);
    if (input > 0) {
      // Calculate total number of minutes
      float minutes = (float) input / 60.0;
      // Calculate number of whole hours from the minutes
      int total_hours = (int) minutes / 60;
      // Calculate minutes left over after the hours are subtracted
      float leftover_minutes = minutes - (total_hours * 60);
      printf("%d seconds is %d hours and %.2f minutes.\n", input, total_hours, leftover_minutes);
    }
  } while (input > 0);
  printf("Goodbye!\n");
  return 0;
}
