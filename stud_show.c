#include "student.h"

void stud_show()
{
 struct Student *temp;

if(head == NULL)
{
printf("\nNo Record Found...\n");
return;
} 

temp = head;

printf("\n*------------------------------------------*\n");
printf(" | Roll|     Name       |  Percentage | \n");
printf("\n*------------------------------------------*\n");

while(temp != NULL)
{
	printf(" |%d   |  %s     |    %.2f  \n",
			temp->roll,
			temp->name,
			temp->percentage);

	temp=temp->next;
}
printf("\n*------------------------------------------*\n");
}
