/*
 * Ex15.c
 *
 *  Created on: Feb 1, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	char operator=0;
	float operand_1=0 , operand_2=0;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);
	printf("\nEnter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&operand_1);
	fflush(stdin); fflush(stdout);
	scanf("%f",&operand_2);
	switch(operator)
	{
	case'+':
	{
		printf("\n%.1f + %.1f = %.1f",operand_1,operand_2,operand_1+operand_2);
	}
	break;
	case'-':
	{
		printf("\n%.1f - %.1f = %.1f",operand_1,operand_2,operand_1-operand_2);
	}
	break;
	case'*':
	{
		printf("\n%.1f * %.1f = %.1f",operand_1,operand_2,operand_1*operand_2);
	}
	break;
	case'/':
	{
		printf("\n%.1f / %.1f = %.1f",operand_1,operand_2,operand_1/operand_2);
	}
	break;
	default:
	{
		printf("\nEnter a valid operator !!!");
	}
	break;
	}
	return 0;
}

