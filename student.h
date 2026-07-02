#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student 
{
	int roll;
	char name[20];
	float percentage;
	struct Student *next;
};

extern struct Student *head;

void stud_add(void);
void stud_show(void);
void stud_del(void);
void stud_mod(void);
void stud_save(void);
void stud_exit(void);
void stud_sort(void);

#endif
