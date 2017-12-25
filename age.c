/************************************************
* filename: age.c
* Exercise: Module 1, Exercise 1
* Name: Kelly Lougheed
* Date Created: October 26, 2017
*
* Description: This program displays someone's
* age in both years and days.
*************************************************/

#include <stdio.h>
int main(void) {
  int age_years = 26;
  // Calculate age in days by multiplying the years by 265
  int age_days = age_years * 365;
  // Print age in both years and days
  printf("I am %d years old, which is also %d days old!", age_years, age_days);
  return 0;
}
