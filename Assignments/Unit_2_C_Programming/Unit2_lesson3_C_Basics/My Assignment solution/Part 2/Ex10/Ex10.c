/*
 * Ex10.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	float a=0 , b=0 , c=0;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	fflush(stdin); fflush(stdout);
	scanf("%f",&c);
	if(a>b)
	{
		if (a>c)
			printf("\nLargest number = %.2f",a);
		else
			printf("\nLargest number = %.2f",c);
	}
	else if(b>c)
	{
		printf("\nLargest number = %.2f",b);
	}
	else
		printf("\nLargest number = %.2f",c);
	return 0;
}
