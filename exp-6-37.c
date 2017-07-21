/*************************************************************************
    > File Name: exp-6-37.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul 12 13:45:46 2017
 ************************************************************************/

/*
 * Write a C program to find one's complement of a binary number.'
 *
 * Example
 *
 * Input
 * Input binary number: 01000011
 * 
 * Output
 * Ones complement: 10111100
 *
 */

#include <stdio.h>
#define SIZE 8

int main()
{
	char binary[SIZE+1], onesComp[SIZE+1];
	int i, error=0;

	printf("Enter %d bit binary number: ", SIZE);

	//gets(binary);  //warning: this program uses gets(), which is unsafe.
	scanf("%s", binary);

	// Store all inverted bits of binary value to oneComp
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
			printf("Invalid value\n");
			error=1;
			break;
		}
	}
	// Mark the end of onesComp string
	onesComp[SIZE] = '\0';

	if(error == 0)
	{
		printf("The origin binary is %s and ones complement is %s\n", binary, onesComp);
	}
	return 0;
}
