/*************************************************************************
    > File Name: exp-1-8.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 17:32:11 2017
 ************************************************************************/

/*
 * Write a C program to enter temperature in Fahrenheit(°F) and convert it into Celsius(°C)
 *
 * Example
 *
 * Input
 * Temperature in Celsius = 100
 * 
 * Output
 * Temperature in Fahrenheit = 212 F
 *
 */

#include <stdio.h>

int main()
{
	float celsius, fahrenheit;

	/* read temperature in fahrenheit */
	printf("Enter temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);

	/* fahrenheit to celsius conversion formula */
	celsius = (fahrenheit - 32 ) * 5 / 9;

	printf("%.2f fahrenheit = %.2f celsius\n", fahrenheit, celsius);

	return 0;

}
