/*************************************************************************
    > File Name: exp-6-38.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jul 13 10:58:05 2017
 ************************************************************************/

/*
 * Write a C program to find two's complement of a binary number.'
 *
 * Example
 *
 * Input
 * Input binary number: 01101110
 * 
 * Output
 * Twos complement: 10010010
 *
 */

#include <stdio.h>
#define SIZE 8

int main()
{
	char binary[SIZE+1], onesComp[SIZE+1], twosComp[SIZE+1];
	int i, error=0;
	int carry = 1;

	printf("Enter a %d bit binary number: ", SIZE);
	scanf("%s", binary);

	for(i=0; i<SIZE; i++)
	{
		if(binary[i] == '1')
		{
			onesComp[i] = '0';
		}
		else if(binary[i] == '0')
		{
			onesComp[i] = '1';
		}
		else
		{
			printf("Ivalide value\n");
			error = 1;
			break;
		}
	}
	onesComp[SIZE] = '\0';
	twosComp[SIZE] = '\0';

	/* Add 1 to ones comlement */
	for(i=SIZE-1; i>=0; i--)
	{
		if((onesComp[i] == '1') && (carry == 1))
		{
			twosComp[i] = '0';
		}
		else if((onesComp[i] == '0') && (carry == 1))
		{
			twosComp[i] = '1';
			carry = 0;
		}
		else
		{
			twosComp[i] = onesComp[i];
		}
	}
	printf("The orgin binary is %s, the ones complement is %s, the twos complement is %s\n", binary, onesComp, twosComp);
	return 0;
}
