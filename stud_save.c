#include "student.h"

void stud_save()
{
	FILE *fp;
	struct Student *temp;

	fp = fopen("student.dat","w");

	if(fp == NULL)
	{
		printf("\nFile Cannot Be Opened...\n");
		return;
	}

	temp = head;

	while(temp != NULL)
	{
		fprintf(fp,"%d %s %.2f\n",
				temp->roll,
				temp->name,
				temp->percentage);

		temp=temp->next;
	}
	fclose(fp);

	printf("\nRecords Saved Successfully...\n");
}
                  
