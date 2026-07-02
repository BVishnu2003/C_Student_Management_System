#include "student.h"

void stud_exit()
{
	char choice;

	printf("\n******** EXIT MENU ********\n");
	printf("S/s : Save and Exit \n");
	printf("E/e : Exit Without Saving\n");

	printf("\nEnter Your Choice: ");
	scanf(" %c", &choice);

	switch(choice)

	{
		case'S':
		case's':

			stud_save();

			printf("\nRecords Saved Successfully...\n");
			printf("Exiting Student Management System...\n");
			exit(0);
		case'E':
		case'e':

		 printf("\nExit Without Saving...\n");
		 printf("\nExiting Student Management System...\n");
		 exit(0);

		default:
			printf("\nInvalid Choice...\n");
	}
}
