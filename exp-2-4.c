/*************************************************************************
    > File Name: exp-2-4.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 10:36:44 2017
 ************************************************************************/

/*
 * Write a C program to set nth bit of a number.
 * 
 * Example:
 *
 * Input number: 12
 * Input nth bit to set: 0
 * 
 * Output number after setting nth bit: 13 in decimal 
 *
 */

#include <stdio.h>

int main()
{
	int num, n, newNum;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* Read the bit number you want to set (0-31) */
	printf("Enter the bit number you want to check (0-31): ");
	scanf("%d", &n);

	/* left shift 1 to n times and perform bitwise OR with the number */
	newNum = (1 << n) | num;

	printf("After setting %dth bit, the original number %d ==> %d\n", n, num, newNum);

	return 0;
}
