/*************************************************************************
    > File Name: exp-2-10.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 16:14:41 2017
 ************************************************************************/

/*
 * Write a C program to count leading zeros in a binary number.
 * 
 * Example:
 *
 * Input any number: 22 
 * 
 * Output leading zeros: 27 (using 4 byte signed integer)
 * 
 */

/*
 * 计算机中有符号数都是用补码形式表示的
 *
 * 那么补码怎么计算出来的呢？
 *
 * 1、正数：原码和补码一致
 *
 * 2、负数：原码取反，然后加1
 *
 * 例子：
 *
 * 1、先取-1的原码：10000000 00000000 00000000 00000001
 *
 * 2、得反码：     11111111 11111111 11111111 11111110（除符号位按位取反）
 *
 * 3、得补码：     11111111 11111111 11111111 11111111
 *
 * －1在计算机里用二进制表达就是全1
 *
 */

#include <stdio.h>
#include <limits.h>	//used for INT_MAX, is +2147483647, 2^31-1
#define INT_SIZE sizeof(int) * 8	//Integer size in bits

int main()
{
	int num, i, msb, count=0;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	msb = 1 << (INT_SIZE - 1);

	/* Iterate over each bit */
	for(i=0; i<INT_SIZE; i++)
	{
		if((num << i) & msb)
			break;
		count++;
	}

/*
	while(!(num & (~INT_MAX)))
	{
		count++;
		num = num << 1;
	}
*/
	printf("~INT_MAX=%d\n",~INT_MAX);
	printf("Total number of leading zeros in %d is %d\n", num, count);

	return 0;
}
