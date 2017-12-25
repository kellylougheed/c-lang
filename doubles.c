/************************************************
* filename: doubles.c
* Exercise: Module 4, Exercise 2
* Name: Kelly Lougheed
* Date Created: November 6, 2017
*
* Description: This program prints two doubles
* that the user inputs.
*************************************************/

#include <stdio.h>

void print_doubles(double x, double y);

int main(void) {
  double a, b;
  printf("Enter two large numbers (doubles): ");
  scanf("%lf %lf", &a, &b);
  print_doubles(a, b);
  return 0;
}

void print_doubles(double x, double y) {
  printf("%lf %lf\n", x, y);
}
