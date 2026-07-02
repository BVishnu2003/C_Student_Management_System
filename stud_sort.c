#include "student.h"


void stud_sort()
{
	struct Student *p,*q;
	int tempRoll;
	float tempPer;
	char tempName[20];
	char choice;

	if(head == NULL || head->next == NULL)
	{
		printf("\nNo Records to Sort...\n");
		return;
	}

	printf("\n******** SORT MENU ********\n");
	printf("N/n : Sort by Name\n");
	printf("P/p : Sort by Percentage\n");

	printf("\nEnter Your Choice : ");
	scanf(" %c", &choice);

	switch(choice)
	{
		case'N':
		case'n':

			for(p=head; p->next != NULL; p=p->next)
			{
				for(q=p->next;q != NULL; q=q->next)
				{
					if(strcmp(p->name, q->name) > 0)
					{
						tempRoll = p->roll;
						p->roll =  q->roll;
						q->roll = tempRoll;

						strcpy(tempName,p->name);
						strcpy(p->name,q->name);
						strcpy(q->name,tempName);

						tempPer = p->percentage;
						p->percentage =q->percentage;
						q->percentage = tempPer;
					}
				}
			}

			printf("\nRecords Sorted  by Name Successfully...\n");
			break;

		case 'P':
		case 'p':

			for(p=head;p->next != NULL;p=p->next)
			{
				for(q=p->next; q !=NULL; q = q->next)
				{
					if(p->percentage >q->percentage)
					{
						tempRoll = p->roll;
						p->roll= q->roll;
						q->roll=tempRoll;


						strcpy(tempName, p->name);
						strcpy(p->name,  q->name);
						strcpy(q->name,tempName);

						tempPer = p->percentage;
						p->percentage=q->percentage;
						q->percentage= tempPer;
					}
				}
			}
			printf("\nRecords Sorted by Percentage Successfully...\n");
			break;
		default:
			printf("\nInvalid Choice...\n");
	}
}


