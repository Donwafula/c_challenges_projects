#include "grades.h"

/**
 * main - student grading system
 * Return: 0 on success
 */
int main(void)
{
	struct Student *student = allocate_student();

	initialize_student(student);
	loop(student);
	if (student != NULL)
	{
		free_student(student);
	}

	return (0);
}

/**
 * prompt - function to dispaly menu
 * @student: struct array
 * @choice: option to select
 * Return: choice
 */
int prompt(struct Student *student, int choice)
{
	printf("STUDENT GRADING SYSTEM\n");
	printf("Select option:\n1. Input student data\n2. Calculate averages\n");
	printf("3. Determine grades\n4. Display results\n5. Exit\n\n REPLY: ");
	if (scanf("%d", &choice) != 1)
	{
		printf("Error in making selection\n");
		free_student(student);
		exit(1);
	}

	return (choice);
}

/**
 * loop - function to perform task based on user choice
 * @student: struct array
 */
void loop(struct Student *student)
{
	int choice = 0;

	while (choice != 5)
	{
		choice = prompt(student, choice);
		switch (choice)
		{
			case 5:
				printf("Exiting the program. Goodbye!\n");
				continue;
			case 1:
				s_name(student);
				break;

			case 2:
				average(student);
				break;

			case 3:
				grade(student);
				break;

			case 4:
				display(student);
				break;

			default:
				printf("Invalid. Please enter a valid choice\n\n");
				continue;
		}
	}
}
