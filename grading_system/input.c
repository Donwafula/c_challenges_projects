#include "grades.h"



/**
 * s_name - function to get student's name
 * @student: struct array
 */
void s_name(struct Student *student)
{
	student->name = malloc(MAX_NAME * sizeof(char));
	if (student->name == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	printf("Enter student's name (Max 20 characters): ");
	while (getchar() != '\n')
		;
	/*Using fgets to read full name including spaces*/
	if (fgets(student->name, MAX_NAME, stdin) != NULL)
	{
		/*Remove new line character*/
		size_t len = _strlen(student->name);

		if (len > 0 && student->name[len - 1] == '\n')
			student->name[len - 1] = '\0';
	}
	else
	{
		printf("Error reading name input\n");
		free(student->name);
		return;
	}
	s_ID(student);
	get_subjects(student);
	get_marks(student);
	printf("\nStudent data captured successfully.\n\n");
}

/**
 * s_ID - function to get student's ID
 * @student: struct array
 * Return: student's ID
 */
int s_ID(struct Student *student)
{
	printf("Enter student ID: ");
	scanf("%d", &(student->id));
	return (student->id);
}
/**
 * get_subjects - Function to get name of subjects
 * @student: struct array
 */
void get_subjects(struct Student *student)
{
	printf("Enter number of subjects taken by the student: ");
	scanf("%d", &(student->num_subjects));
	/*printf("%d\n", student->num_subjects);*/

	student->subjects = malloc((student->num_subjects) * sizeof(char *));
	if (student->subjects == NULL)
	{
		printf("Error allocating memory to subjects\n");
		return;
	}

	int i = 0;

	for (i = 0; i < student->num_subjects; i++)
	{
		student->subjects[i] = malloc(MAX_SUB * sizeof(char));
		if (student->subjects[i] == NULL)
		{
			printf("Error allocating memory to subject %d\n", i + 1);
		}
		printf("Enter name of subject %d (Max 3 letters): ", i + 1);
		scanf("%s", student->subjects[i]);
	}

}

/**
 * get_marks - Function to get marks of each subject
 * @student: struct array
 */
void get_marks(struct Student *student)
{
	int i = 0;

	student->marks = malloc((student->num_subjects) * sizeof(int));
	if (student->marks == NULL)
	{
		printf("Error allocating memory for marks\n");
		return;
	}

	for (i = 0; i < student->num_subjects; i++)
	{
		printf("Enter marks for %s: ", student->subjects[i]);
		scanf("%d", &(student->marks[i]));
	}
}

