/*************************************************************************
    > File Name: exp-4-21.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul  3 12:27:08 2017
 ************************************************************************/

/*
 * Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
 * For first 50 units Rs. 0.50/unit
 * For next 100 units Rs. 0.75/unit
 * For next 100 units Rs. 1.20/unit
 * For unit above 250 Rs. 1.50/unit
 * An additional surcharge of 20% is added to the bill
 *
 */

#include <stdio.h>

int main()
{
	float unit;
	float amt, total_amt, sur_charge;

	//read unit consumed from user
	printf("Enter total units consumed: ");
	scanf("%f", &unit);

	/* Calculate electricity bill according to given conditions */
	if(unit <= 50)
	{
		amt = unit * 50;
	}
	else if(unit <= 150)
	{
		amt = 50 * 0.5 + (unit - 50) * 0.75;
	}
	else if(unit <= 250)
	{
		amt = 50 * 0.5 + 100 * 0.75 + (unit - 150) * 1.20;
	}
	else
	{
		amt = 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
	}

	/* Calculate total electricity bill after adding surcharge */
	sur_charge = amt * 0.20;
	total_amt = amt + sur_charge;

	printf("Electricity bill is %.2f\n", total_amt);

	return 0;
}
