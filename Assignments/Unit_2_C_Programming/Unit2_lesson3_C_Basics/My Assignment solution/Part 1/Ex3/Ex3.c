/*
 * Ex3.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	int int1=0,int2=0;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&int1);
	scanf("%d",&int2);
	printf("\n Sum: %d", (int1+int2));
	return 0;
}
