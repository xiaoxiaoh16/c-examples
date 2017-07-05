/*************************************************************************
    > File Name: exp-5-7.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul  5 14:56:26 2017
 ************************************************************************/

/*
 * Write a C program to create Simple Calculator using switch case.
 * 
 * Example
 *
 * Input
 * 5.2 - 3
 *
 * Output
 * 2.2
 *
 */

#include <stdio.h>

/* function declarations for claculator */
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
	char cp;
	float num1, num2, result;

	printf("Welcom To The Simple Calculator\n");
	printf("---------------------------------\n");
	printf("Enter [number1] [+/-/*//] [number2]: \n");

	// Read two number and an operator from user
	scanf("%f %c %f", &num1, &cp, &num2);

	switch(cp)
	{
		case '+':
			{
				result = add(num1, num2);
				break;
			}
		case '-':
			{
				result = sub(num1, num2);
				break;
			}
		case '*':
			{
				result = mult(num1, num2);
				break;
			}
		case '/':
			{
				result = div(num1, num2);
				break;
			}
		default:
			printf("Please enter correct operator (+, -, *, /)\n");
	}
	printf("%.2f %c %.2f = %.2f\n", num1, cp, num2, result);
	return 0;
}

//function to add two numbers
float add(float num1, float num2)
{
	return num1 + num2;
}

// function to substract two numbers
float sub(float num1, float num2)
{
	return num1 - num2;
}

// function to multiple two numbers
float mult(float num1, float num2)
{
	return num1 * num2;
}

// function to divide two numbers
float div(float num1, float num2)
{
	return num1 / num2;
}
