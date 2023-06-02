/*
 * Ex_1.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Yousef
 */
#include "stdio.h"

struct Sstudent
{
	char m_name[100];
	int m_roll;
	float m_marks;
};

int main()
{
	struct Sstudent student1;
	printf("Enter information of students: \n");

	printf("\nEnter name: ");
	fflush(stdout); fflush(stdin);
	gets(student1.m_name);

	printf("Enter roll number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&student1.m_roll);

	printf("Enter marks: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&student1.m_marks);

	printf("\nDisplaying Information\n");
	printf("Name: %s\n",student1.m_name);
	printf("Roll: %d\n",student1.m_roll);
	printf("Marks: %.2f\n",student1.m_marks);

	return 0;
}

