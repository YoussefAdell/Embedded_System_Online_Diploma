/*
 * Ex14.c
 *
 *  Created on: Feb 1, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	int i=0 , n=0 , factorial=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n>=0)
	{
		if(n>0)
		{
			for(i=n;i>=1;i--)
				factorial*= i;
		}
		else
			factorial=1;
		printf("\nFactorial = %d",factorial);
	}
	else
		printf("\nError!!! Factorial of negative number doesn't exist.");
	return 0;
}


