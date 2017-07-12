/*************************************************************************
    > File Name: exp-6-3.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jul  6 16:51:14 2017
 ************************************************************************/

/*
 * Write a C program to print all alphabets from a to z. - using while loop
 *
 * Example
 *
 * Input
 * 
 * Output
 * Alphabets: 
 * a, b, c, ... , x, y, z
 *
 */

#include <stdio.h>

int main()
{
	char ch;
	ch = 'a';

	printf("All alphabets from a to z : \n");

	/* Integer from 97 to 122 with c% will convert integer to character before print 
	 * %c will take ascii and display its character equivalent
	*/
	while((ch >= 'a') && ( ch <= 'z'))
	{
		printf("%c\n", ch);
		ch++;
	}

	return 0;
}
