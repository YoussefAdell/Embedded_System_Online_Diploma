/*
 * Ex_4.c
 *
 *  Created on: Mar 8, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int calc_power(int base, int pwr);

int main(void)
{
	int base_num, pwr_num;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base_num);
	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pwr_num);
	printf("%d^%d = %d",base_num ,pwr_num ,calc_power(base_num, pwr_num));
	return 0;
}

int calc_power(int base, int pwr)
{
	if(pwr != 0)
	{
		if(pwr > 1)
			return base*calc_power(base,pwr-1);
		else
			return base;
	}
	return 1;
}

