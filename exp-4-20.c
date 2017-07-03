/*************************************************************************
    > File Name: exp-4-20.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul  3 09:45:36 2017
 ************************************************************************/

/*
 * Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
 * Basic Salary <= 10000 : HRA = 20%, DA = 80%
 * Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
 * Basic Salary >= 20001 : HRA = 30%, DA = 95%
 *
 * Example
 *
 * Input
 * Input basic salary of an employee: 22000
 * 
 * Output
 * Gross salary = 44000
 *
 */

#include <stdio.h>

int main()
{
	float basic, gross, da, hra;

	/* Read basic salary of employee */
	printf("Enter basic salary of an employee: ");
	scanf("%f", &basic);

	if(basic <= 10000)
	{
		da = basic * 0.8;
		hra = basic * 0.2;
	}
	else if((basic > 10000) && (basic <= 20000))
	{
		da = basic * 0.9;
		hra = basic * 0.25;
	}
	else if(basic > 20000)
	{
		da = basic * 0.95;
		hra = basic * 0.3;
	}

	printf("Basic salary %.2f, HRA  = %.2f and DA = %.2f\n", basic, hra, da);

	/* Calculate gross salary */
	gross = basic + hra + da;
	
	printf("Gross of employee is %.2f\n", gross);
	return 0;
}
