/*
 * Ex_1.c
 *
 *  Created on: Feb 21, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main(void)
{
	int i=0,j=0;
	float a[2][2], b[2][2],sum[2][2];

	//matrix 1
	printf("Enter the elements of the 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	//matrix 2
	printf("\nEnter the elements of the 2nd matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}

	// sum of two matrices
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}

	printf("\nSum Of Matrix: \n");
	//Printing the sum of matrices
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.1f\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
