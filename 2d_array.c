/************************************************
* filename: 2d_array.c
* Exercise: Module 5, Exercise 2
* Name: Kelly Lougheed
* Date Created: November 15, 2017
*
* Description: Program that takes in five
* integers, stores them and their squares in a
* 2D array, and prints the contents of the array.
*************************************************/

#include <stdio.h>

int main(void) {
  int numbers[5][2];
  // Calculate number of elements inside the array
  int array_size = sizeof(numbers)/sizeof(numbers[0]);
  printf("Enter five integers: ");
  // Store integers in array
  scanf("%d %d %d %d %d", &numbers[0][0], &numbers[1][0], &numbers[2][0], &numbers[3][0], &numbers[4][0]);
  // Calculate the square of each integer and stores it in the array
  for (int i = 0; i < array_size; i++) {
    numbers[i][1] = numbers[i][0] * numbers[i][0];
  }
  // Print contents of the array
  printf("Value\t Squared\n");
  for (int j = 0; j < array_size; j++) {
    printf("%d\t %d\n", numbers[j][0], numbers[j][1]);
  }
  printf("\n");
  return 0;
}
