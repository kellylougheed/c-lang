/************************************************
* filename: convert_driver.c
* Exercise: Module 6, Exercise 3
* Name: Kelly Lougheed
* Date Created: November 26, 2017
*
* Description: This program converts a temperature
* in Fahrenheit to Celsius.
*************************************************/

#include "stdio.h"
#include "conversion.h"

int main(void) {

  float fahrenheit, celsius;

  printf("Please enter a temperature in degrees Fahrenheit: ");
  scanf("%f", &fahrenheit);

  // Converts Fahrenheit to Celsius
  celsius = convert(fahrenheit);
  // Shows answer rounded to one decimal place
  printf("%.1f degrees F is %.1f degrees C.\n", fahrenheit, celsius);

  return 0;
}
