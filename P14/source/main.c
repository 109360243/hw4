#include <stdio.h>
#include <stdlib.h>
#define STUDENT 3
#define EXAM 4
int minimum(const int grades[][EXAM],int pepils, int tests);
int maximum(const int grades[][EXAM], int pupils, int tests);
double average(const int setofGrades[], int tests);
void printArray(const int grades[][EXAM], int pupils, int tests);
int main(void)
{
	int student;
	const int studentGrades[STUDENT][EXAM] =
	{
	{77, 68, 86, 73},
	  {96, 87, 89, 78},
	  {70, 90, 86, 81} };
	printf("The array is :\n");
	printArray(studentGrades,STUDENT,EXAM);
	printf("\n\nLowet grade:%d\nHighest grade:%d\n",
		minimum(studentGrades, STUDENT, EXAM),
		maximum(studentGrades, STUDENT, EXAM));
	for (student = 0; student < STUDENT; student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, average(studentGrades[student], EXAM));
}
	system("pause");
	return 0;
}
void printArray(const int grades[][EXAM], int pupils, int tests)
{
	int i;
	int j;
	printf("[0] [1] [2] [3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d]", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);

	}
}
int minimum(const int grades[][EXAM], int pupils, int tests)
{
	int i;
	int j;
	int lowGrade = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];

			}
		}
	}
	return lowGrade;
}
int maximum(const int grades[][EXAM], int pupils, int tests)
{
	int i;
	int j;
	int highGrade = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];

			}
		}
	}
	return highGrade;
}
double average(const int setofGrades[], int tests)
{
	int i;
	int total = 0;
	for (i = 0; i < tests; i++)
	{
		total += setofGrades[i];
	}
	return (double)total / tests;
}





