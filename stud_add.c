#include "student.h"

void stud_add()
{
	struct Student *newnode, *temp;
	static int roll =1;

	newnode = (struct Student *)malloc(sizeof(struct Student));


	if(newnode == NULL)
	{
		printf("Memory Allocation Failed\n");
		return ;
	}
	newnode->roll=roll++;

	printf("\n Enter Student Name : ");
	scanf("%s",newnode->name);

	printf("\n Enter Percentage : ");
	scanf("%f",&newnode->percentage);

	newnode->next =NULL;

	if(head == NULL)
	{
		head=newnode;
	}
	else
	{
		temp=head;

		while(temp->next !=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	printf("\nStudent Record Added Successffully..\n");
}
