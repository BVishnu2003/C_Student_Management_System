#include "student.h"

void stud_del()
{
	struct Student *temp,*prev;
	int roll;
	char name[20];
	char choice;

	if(head ==NULL)
	{
		printf("\n No Record Found..\n");
		return;
	}
	printf("\n******** DELETE MENU ********\n");
	printf("R/r : Delete using Roll Number\n");
	printf("N/n : Delete using Name\n");

	printf("\n Enter Your Choice : ");
	scanf(" %c", &choice);

	switch(choice)
	{
		case'R':
		case'r':
			printf("\n Enter Roll Number to Delete :");
			scanf("%d",&roll);

			temp = head;
			prev =NULL;
			
			while(temp != NULL)
			{
				if(temp->roll == roll)
				{
					if(prev == NULL)
						head = temp->next;
					else
						prev->next = temp->next;
					free(temp);
					printf("\n Record Deleted Successfully...\n");
					return;
				}
				prev =temp;
				temp=temp->next;
			}
			printf("\n Record Not Found...\n");
			break;
		case 'N':
		case'n':

			printf("\Enter Name : ");
			scanf("%s", name);

			temp = head;

			printf("\n----------------------------------------\n");
			printf("Roll\tName\tPercentage\n");
			printf("\n----------------------------------------\n");

			while(temp != NULL)
			{
				if(strcmp(temp->name,name)==0)
				{
					printf("%d\t%s\t%.2f\n",
							temp->roll,
							temp->name,
							temp->percentage);
				}
				temp = temp->next;
			}
			printf("\nEnter Roll Number to Delete :");
			scanf("%d", &roll);

			temp = head;
			prev = NULL;

			while(temp != NULL)
			{
				if(temp->roll == roll)
				{
					if(prev == NULL)
						head = temp->next;
					else
						prev->next=temp->next;
					free(temp);

					printf("\nRecord Deleted Successfully...\n");
					return;
				}
				prev =temp;
				temp=temp->next;
			}
			printf("\nRecord Not Found...\n");
			break;
			
		default:
			printf("\nInvalid Choice...\n");
	}
}



