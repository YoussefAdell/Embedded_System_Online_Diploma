/*
 * Ex_3.c
 *
 *  Created on: Jun 2, 2023
 *      Author: Yousef
 */
#include "stdio.h"

struct SComplex
{
	double m_R;
	double m_I;
};

struct SComplex Add_Complex(struct SComplex A,struct SComplex B);

int main()
{
	struct SComplex num1,num2,sum;
	printf("Enter 1st complex number \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout); fflush(stdin);
	scanf("%lf %lf",&num1.m_R,&num1.m_I);

	printf("Enter 2nd complex number \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout); fflush(stdin);
	scanf("%lf %lf",&num2.m_R,&num2.m_I);

	sum = Add_Complex(num1,num2);
	printf("\nSum=%.1lf + %.1lf i \n",sum.m_R,sum.m_I);

	return 0;
}

struct SComplex Add_Complex(struct SComplex A,struct SComplex B)
{
	struct SComplex Sum;
	Sum.m_R = A.m_R+B.m_R;
	Sum.m_I = A.m_I+B.m_I;
	return Sum;
}

