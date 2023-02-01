/*
 * Ex7.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	float a=0 , b=0;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	a=a+b; 										//a = sum of a and b
	b=a-b; 										//sum - b = old value of a then store it in b
												// a = sum , b = old value of a
	a=a-b; 										// sum - b(which is now old value of a) = old value of b then store it in a
	printf("\nAfter swapping, value of a = %.2f",a);
	printf("\nAfter swapping, value of b = %.1f",b);//numbers are swapped
	return 0;
}
//Enter value of a: 1.20
//Enter value of b: 2.45
//
//After swapping, value of a = 2.45
//After swapping, value of b = 1.2
