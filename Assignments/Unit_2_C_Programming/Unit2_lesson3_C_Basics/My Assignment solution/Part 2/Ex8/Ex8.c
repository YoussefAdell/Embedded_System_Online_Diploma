/*
 * Ex8.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	int i_a=0;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i_a);
	if(i_a%2)
		printf("\n%d is odd",i_a);
	else
		printf("\n%d is even",i_a);
	return 0;
}

