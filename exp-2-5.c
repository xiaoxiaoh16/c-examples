/*************************************************************************
    > File Name: exp-2-5.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 11:08:33 2017
 ************************************************************************/

/*
 * Write a C program to clear nth bit of a number.
 *
 * Example:
 *
 * Input number: 13
 * Input nth bit to clear: 0
 * 
 * Output number after clearing nth bit: 12 (in decimal)
 *
 */

#include <stdio.h>

int main()
{
	int num, n, newNum;

	/* Read num from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* read the bit number you want to clear */
	printf("Enter the bit number you want to clear (0-31):");
	scanf("%d", &n);
	
	/* left shift 1 to n times, perform complement(is ~ not ^), then perform bitwise AND with original number */
	newNum = num & (~(1 << n));

	printf("After clearing %dth bit, the original number %d ==> %d\n", n, num, newNum);

	return 0;
}
