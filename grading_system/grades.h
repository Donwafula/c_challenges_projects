#ifndef GRADES_C
#define GRADES_C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 21
#define MAX_SUB 4

/**
 * struct Student - student's details
 * @name: student's name
 * @id: Student's ID
 * @num_subjects: Number of subjects to be recorded
 * @subjects: subject name
 * @marks: array to record marks in each subject
 * @average: average score for all subjects
 * @grade: overall student's grade
 */
struct Student
{
	char *name;
	int id;
	int num_subjects;
	char **subjects;
	int *marks;
	float average;
	char grade;
};

/*Functions to get student's data*/
void s_name(struct Student *student);
int s_ID(struct Student *student);
void get_subjects(struct Student *student);
void get_marks(struct Student *student);
void average(struct Student *student);
void grade(struct Student *student);
void display(struct Student *student);
int prompt(struct Student *student, int choice);
void loop(struct Student *student);

/*Functions for memory access and free*/
void initialize_student(struct Student *student);
struct Student *allocate_student(void);
void free_student(struct Student *student);

/*String manipulation functions*/
int _strlen(char *c);
int _atoi(char *c);

#endif /*GRADES_C*/
