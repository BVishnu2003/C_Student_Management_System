#include "student.h"

void stud_mod()
{       
        struct Student *temp;
	int roll;
	char choice;

	if(head == NULL)
	{
		printf("\n No Records Found...\n");
		return;
	}
	printf("\n********* MODIFY MENU ********\n");
	printf("R/r : Roll Number\n");
	printf("N/n : Name\n");
	printf("P/p : Percentage\n");

	printf("\nEnter Your Choice : ");
	scanf(" %c",&choice);

	printf("\nEnter Roll Number: ");
	scanf("%d", &roll);
	
	
	printf("\n********* MODIFY FIELD ********\n");
        printf("N/n : Name\n");
        printf("P/p : Percentage\n");

        printf("\nEnter Your Choice : ");
        scanf(" %c",&choice);



	temp = head;

	while(temp != NULL)
	{
		if(temp->roll == roll)
		{
			switch(choice)
			{
				case'R':
				case'r':
					printf("Enter New Name :");
					scanf("%d",&temp->roll);
					break;

				case'N':
				case'n':
					printf("Enter New Name : ");
					scanf("%s", temp->name);

				case'P':
				case'p':

					printf("Enter New Percentage : ");
					scanf("%f",&temp->percentage);
					break;

				default:

					printf("\nInvalid Choice...\n");
					return;
			}

			printf("\nRecord Modified Successfully...\n");
			return;
		}
		temp=temp->next;
	}
	printf("\nRecord Not Found...\n");
}
                  
