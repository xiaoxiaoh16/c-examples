/*************************************************************************
    > File Name: exp-2-6.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 11:25:08 2017
 ************************************************************************/

/*
 * Write a C program to toggle nth bit of a number. 
 * 
 * Example:
 *
 * Input number: 22
 * Input nth bit to toggle: 1
 * 
 * Output after toggling nth bit: 20 (in decimal) 
 *
 */

#include <stdio.h>

int main()
{
	int num, n, newNum;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* Read the bit number you want to toggle */
	printf("Enter the bit number you want to toggle: ");
	scanf("%d", &n);

	/* Left shift 1 to n times, then perform bitwise XOR with number and result of above */
	newNum = num ^ (1 <<n );

	printf("After toggling %dth bit, the original number %d ==> %d.\n", n, num, newNum);

	return 0;
}
