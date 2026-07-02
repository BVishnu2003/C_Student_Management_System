#include "student.h"

struct Student *head =NULL;

int main()
{
	char choice;

	while(1)
	{
		printf("\n******** STUDENT RECORD MENU ********\n");
		printf("A/a : Add New Record\n");
		printf("D/d : Delete a Record\n");
		printf("S/s : Show the List\n");
		printf("M/m : Modify a Record\n");
		printf("V/v : Save\n");
		printf("T/t : Sort the List\n");
		printf("E/e: Exit\n");


		printf("\nEnter Your Choice : ");
		scanf(" %c", &choice);


		switch(choice)
		{
			case 'A':
			case'a':
				stud_add();
				break;

			case 'S':
			case's':
				stud_show();
				break;

			case 'D':
			case'd':
				stud_del();
				break;

			case 'M':
			case'm':
				stud_mod();
				break;

			case'V':
			case'v':
				stud_save();
				break;
			case'T':
			case't':
				stud_sort();
				break;
			case'E':
			case'e':
				stud_exit();
				break;
			default:
				printf("\nInvalid Choice\n");
		}
	}
	return 0;
}
