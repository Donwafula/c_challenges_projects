#include "grades.h"

/**
 * initialize_student - Function to initialize struct Student parameters
 *											a requirement to prevent valgrind warnings
 * @student: struct array
 */
void initialize_student(struct Student *student)
{
	student->name = NULL;
	student->id = 0;
	student->num_subjects = 0;
	student->subjects = NULL;
	student->marks = NULL;
	student->average = -1.0;
	student->grade = '\0';
}

/**
 * allocate_student - function to allocate memory to struct Student
 * Return: student
 */
struct Student *allocate_student(void)
{
	struct Student *student = malloc(sizeof(struct Student));

	if (student == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	return (student);
}

/**
 * free_student - function to free memory allocated to struct Student
 * @student: struct array
 */
void free_student(struct Student *student)
{
	int i = 0;

	if (student != NULL)
	{
		free(student->name);
	for (i == 0; i < student->num_subjects; i++)
	{
		free(student->subjects[i]);
	}
	free(student->subjects);
	free(student->marks);
	free(student);
	}
}
