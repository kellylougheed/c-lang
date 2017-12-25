/************************************************
* filename: trip.c
* Exercise: Module 2, Exercise 2
* Name: Kelly Lougheed
* Date Created: October 29, 2017
*
* Description: This program outputs travel time
* based on the distance and speed of a trip.
*************************************************/

#include <stdio.h>
int main(void) {
  int distance, mph;
  char name[40];
  printf("Enter the trip distance in miles: ");
  scanf("%d", &distance);
  printf("Enter your speed in miles per hour: ");
  scanf("%d", &mph);
  printf("Enter your name: ");
  scanf("%s", name);
  // Calculate the travel time as a float
  float hours = (float) distance / (float) mph;
  // Print the travel time rounded to two decimal places
  printf("%s, your trip of %d miles at %d mph will take %.2f hours.\n", name, distance, mph, hours);
  return 0;
}
