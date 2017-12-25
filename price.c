/************************************************
* filename: price.c
* Exercise: Module 2, Exercise 4
* Name: Kelly Lougheed
* Date Created: October 29, 2017
*
* Description: This program calculates and prints
* the price of an item after 5.6% sales tax.
*************************************************/

#include <stdio.h>
#define SALES_TAX .056
int main(void) {
  float price;
  printf("Enter the price of an item: ");
  scanf("%f", &price);
  // Calculate price with sales tax
  float price_with_tax = price + (price * SALES_TAX);
  // Calculate number of whole dollars
  int dollars = (int) price_with_tax;
  // Calculate number of cents leftover after dollars
  float cents = (price_with_tax - dollars) * 100;
  printf("Item price of $%.2f with sales tax is %d dollars and %2.0f cents\n", price, dollars, cents);
  return 0;
}
