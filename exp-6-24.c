/*************************************************************************
    > File Name: exp-6-24.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 09:52:44 2017
 ************************************************************************/

/*
 * Write a C program to find HCF (GCD) of two numbers. *
 *
 * Example
 *
 * Input
 * Input first number: 12
 * Input second number: 30
 * 
 * Output
 * HCF of 12 and 30: 6
 *
 */

#include <stdio.h>

int main()
{
	int i, num1, num2, min, hcf=1;

	//Read two numbers from user
	printf("Enter two numbers one by one: ");
	scanf("%d%d", &num1, &num2);

	min = (num1 < num2)? num1:num2;

	for(i=1; i<=min; i++)
	{
		if((num1%i == 0) && (num2%i == 0))
			hcf = i;
	}

	printf("HCF of %d and %d is %d\n", num1, num2, hcf);
	return 0;
}
