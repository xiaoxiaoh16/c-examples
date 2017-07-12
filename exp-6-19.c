/*************************************************************************
    > File Name: exp-6-19.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 15:20:20 2017
 ************************************************************************/

/*
 * Write a C program to enter any number and print it in words.
 *
 * Example
 *
 * Input
 * Input number: 1234
 * 
 * Output
 * One Two Three Four
 *
 */

#include <stdio.h>
#include <math.h>	//used for log10() function

int main()
{
	int num, newNum, digits, newDigits;
	newNum = 0;
	newDigits = 0;

	// Read numbers from user
	printf("Enter a number: ");
	scanf("%d", &num);

	//Find total number of digits in n
	digits = (int)log10(num) + 1;

	//Store reverse of num in newNum
	while(num != 0)
	{
		newNum = (newNum * 10) + (num % 10);
		num /= 10;
	}
	
	//Find total number of trailling zeros
	newDigits = digits - (int)log10(newNum)-1;

	while(newNum != 0)
	{
		switch(newNum % 10)
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
		newNum /= 10;
	}

	while(newDigits)
	{
		printf("Zero ");
		newDigits--;
	}

	printf("\n");
	return 0;
}
