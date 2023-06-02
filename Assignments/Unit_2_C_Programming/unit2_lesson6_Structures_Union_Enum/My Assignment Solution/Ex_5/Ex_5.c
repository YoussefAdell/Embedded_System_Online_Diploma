/*
 * Ex_5.c
 *
 *  Created on: Jun 2, 2023
 *      Author: Yousef
 */
#include "stdio.h"
#define pi 3.1415
#define Calc_area(r) (pi*(r)*(r))

int main()
{
	float radius,area;
	printf("Enter the radius: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&radius);

	area=Calc_area(radius);
	printf("Area=%.2f",area);
	return 0;
}

