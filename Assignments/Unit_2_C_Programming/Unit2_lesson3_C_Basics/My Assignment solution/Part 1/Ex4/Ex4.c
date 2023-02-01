/*
 * Ex4.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	float f_Num1=0,f_Num2=0;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&f_Num1);
	scanf("%f",&f_Num2);
	printf("\n Product: %f", (f_Num1*f_Num2));
	return 0;
}
