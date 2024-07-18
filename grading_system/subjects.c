#include "grades.h"



/**
 * average - function to calculate the student's avarage score
 * @student: struct array
 */
void average(struct Student *student)
{
	int i = 0, result = 0;

	if (student->name != NULL && student->num_subjects > 0)
	{
		for (i = 0; i < student->num_subjects; i++)
			result += student->marks[i];

		student->average = (float)result / student->num_subjects;
		printf("\nAVERAGE: SUCCESS!\n\n");
	}
	else
	{
		printf("Please enter student data first\n\n");
		s_name(student);
	}
}

/**
 * grade - function to calculate the student's grade
 * @student: struct array
 */
void grade(struct Student *student)
{
	float a = student->average;

	if (student->name != NULL && student->average >= 0)
	{
		if (a > 89)
			student->grade = 'A';
		else if (a > 79 && a < 90)
			student->grade = 'B';
		else if (a > 69 && a < 80)
			student->grade = 'C';
		else if (a > 59 && a < 70)
			student->grade = 'D';
		else
			student->grade = 'F';

		printf("\nGRADE: SUCCESS!\n\n");
	}
	else
	{
		printf("Please enter student data first\n\n");
		s_name(student);
	}
}

/**
 * display - Function to print name and marks of subjects
 * @student: struct array
 */
void display(struct Student *student)
{
	int i = 0;

	if (student->average < 0)
		average(student);
	if (student->grade == '\0')
		grade(student);

	if (student->name != NULL)
	{
		printf("\nStudent name: %s\nStudent ID: %d\n", student->name, student->id);
		for (i == 0; i < student->num_subjects != '\0'; i++)
			printf("%s: %d\n", student->subjects[i], student->marks[i]);

		printf("Average: %.2f\n", student->average);
		printf("Grade: %c\n\n", student->grade);
	}
	else
	{
		printf("Student data missing and should be entered first\n");
	}
}



