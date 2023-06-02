/*
 * Ex_2.c
 *
 *  Created on: Jun 2, 2023
 *      Author: Yousef
 */
#include "stdio.h"

struct Sunits
{
	int m_feet;
	float m_inch;
};

int main()
{
	struct Sunits distance1,distance2,sum;
	printf("Enter information for 1st distance: \n");

	printf("Enter feet: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&distance1.m_feet);

	printf("Enter inch: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&distance1.m_inch);

	printf("\nEnter information for 2nd distance: \n");

	printf("Enter feet: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&distance2.m_feet);

	printf("Enter inch: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&distance2.m_inch);

	sum.m_inch=distance1.m_inch+distance2.m_inch;
	sum.m_feet=distance1.m_feet+distance2.m_feet;

	printf("\nSum of distances=%d' %.3f\" \n",(sum.m_feet+(int)(sum.m_inch/12)),((sum.m_feet+(sum.m_inch/12))-(sum.m_feet+(int)(sum.m_inch/12))));

	return 0;
}

