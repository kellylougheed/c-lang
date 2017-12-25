/************************************************
* filename: box.c
* Exercise: Module 3, Exercise 2
* Name: Kelly Lougheed
* Date Created: October 30, 2017
*
* Description: This program calculates and
* displays the surface area and volume of a box
* based on user input.
*************************************************/

#include <stdio.h>

// Function to calculate volume
int calc_volume(int length, int width, int height) {
  int volume = length * width * height;
  return volume;
}

// Function to calculate surface area
int calc_surface_area(int length, int width, int height) {
  int surface_area = (2 * length * width) + (2 * width * height) + (2 * length * height);
  return surface_area;
}

int main(void) {
  // Length will double as a variable to detect if the user wants to quit by entering the value 0
  int length = 1;

  while (length > 0) {
    int width;
    int height;
    printf("Find out your box's surface area and volume! Enter 0 to quit.\n");
    printf("Enter box length: ");
    scanf("%d", &length);

    // Check for a zero entered to quit
    if (length > 0) {
      printf("Enter box width: ");
      scanf("%d", &width);
      printf("Enter box height: ");
      scanf("%d", &height);

      // Calculate surface area and volume based on user input
      int surface_area = calc_surface_area(length, width, height);
      int volume = calc_volume(length, width, height);
      printf("The box's surface area is %d and its volume is %d.\n\n", surface_area, volume);
    } else {
      printf("Goodbye!\n");
    }
  }
  return 0;
}
