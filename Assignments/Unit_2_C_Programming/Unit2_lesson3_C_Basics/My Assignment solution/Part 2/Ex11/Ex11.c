/*
 * Ex11.c
 *
 *  Created on: Jan 31, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	float check_num=0;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&check_num);
	if(check_num>0)
	{
		printf("\n%.2f is positive.",check_num);
	}
	else if(check_num<0)
	{
		printf("\n%.2f is negative.",check_num);
	}
	else
		printf("\nYou entered zero.");
	return 0;
}


