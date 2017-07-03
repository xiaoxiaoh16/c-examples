/*************************************************************************
    > File Name: exp-4-19.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 16:55:55 2017
 ************************************************************************/

/*
 * Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate 
 * If percentage >= 90% : Grade A
 * If percentage >= 80% : Grade B
 * If percentage >= 70% : Grade C
 * If percentage >= 60% : Grade D
 * If percentage >= 40% : Grade E
 * If percentage < 40% : Grade F
 * 
 * Example
 *
 * Input
 * Input marks of five subjects: 95
 * 95
 * 97
 * 98
 * 90
 * 
 * Output
 * Percentage = 95.00 
 * Grade A
 *
 */

#include <stdio.h>

int main()
{
	float phy, chem, bio, math, comp;
	float avg;

	/* Read marks of five subjects from user */
	printf("Enter makrs of five subjects from user.\n");
	scanf("%f%f%f%f%f", &phy, &chem, &bio, &math, &comp);

	avg = (phy + chem + bio + math + comp) / 5;

	if(avg >= 90)
		printf("%.2f is Grade A\n", avg);
	else if(avg >= 80)
		printf("%.2f is Grade B\n", avg);
	else if(avg >= 70)
		printf("%.2f is Grade C\n", avg);
	else if(avg >= 60)
		printf("%.2f is Grade D\n", avg);
	else if(avg >= 40)
		printf("%.2f is Grade E\n", avg);
	else
		printf("%.2f is Grade F\n", avg);

	return 0;
}
