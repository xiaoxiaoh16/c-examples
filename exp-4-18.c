/*************************************************************************
    > File Name: exp-4-18.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 15:46:42 2017
 ************************************************************************/

/*
 * Write a C program to calculate profit or loss.
 *
 * Example
 *
 * Input
 * Input cost price: 1000
 * Input selling price: 1500
 * 
 * Output
 * Profit: 500
 *
 */

#include <stdio.h>

int main()
{
	float cp, sp, profit;

	//read cost price and selling price of a production
	printf("Enter cost price and selling price one by one: ");
	scanf("%f%f", &cp, &sp);

	if(sp > cp)
	{
		profit = sp - cp;
		printf("Profit = %.2f\n", profit);
	}
	else if( sp < cp)
	{
		profit = 0;
		printf("Loss = %.2f\n", profit);
	}
	else 
	{
		printf("No profit no loss\n");
	}

	return 0;
}


