/*************************************************************************
    > File Name: exp-1-7.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 17:16:15 2017
 ************************************************************************/

/*
 * Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
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

	/* read temperature in celsius*/
	printf("Enter temperature in celsius: ");
	scanf("%f", &celsius);

	/* celsius to fahrenheit convert formula*/
	fahrenheit = (celsius * 9 / 5) + 32;

	printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);

	return 0;
}

