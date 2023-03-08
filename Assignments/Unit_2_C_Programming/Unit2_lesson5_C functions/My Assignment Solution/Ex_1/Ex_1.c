/*
 * Ex_1.c
 *
 *  Created on: Mar 6, 2023
 *      Author: Yousef
 */
#include "stdio.h"

void detect_and_print_prime(int num);

int main(void)
{
	int lower, higher;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&lower, &higher);

	// if user enters reversed intervals correct them
	if (lower>higher)
	{
		lower = lower+higher;
		higher = lower-higher;
		lower = lower-higher;
	}

	printf("\nPrime numbers between %d and %d are: ",lower,higher);
	//Enter (for loop) only if inside the given interval
	for(;lower<=higher;lower++)
	{
		detect_and_print_prime(lower); //detect and print prime numbers
	}
	return 0;
}


void detect_and_print_prime(int num)
{
	char i, prime_flag;

	for(i=2,prime_flag=0;i<=(num/2);i++)
	{
		if(num%i)
			prime_flag=1;
		else
		{
			prime_flag=0;
			break;
		}
	}
	if(prime_flag==1)
		printf("%d ",num);
}
