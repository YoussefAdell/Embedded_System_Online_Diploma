/*
 * Ex_2.c
 *
 *  Created on: Mar 6, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int calc_factorial(int num);

int main(void)
{
	int entered_num;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&entered_num);
	printf("Factorial of %d = %d",entered_num , calc_factorial(entered_num));
	return 0;
}

int calc_factorial(int num)
{
	if(num!=1)
		return num*calc_factorial(num-1);
	else
		return 1;
}
