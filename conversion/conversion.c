/************************************************
* filename: conversion.c
* Exercise: Module 6, Exercise 3
* Name: Kelly Lougheed
* Date Created: November 26, 2017
*
* Description: This function converts a temperature
* in Fahrenheit to Celsius.
*************************************************/

float convert(float f) {
  float c = (f - 32) * (5/9);
  return c;
}
