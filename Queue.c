#include<stdio.h>
#include<conio.h>
#define SIZE 5

int front = -1;
int rear = -1;
int q[SIZE];

void insert(); // function declaraion
void del(); // function declaraion
void display(); // function declaraion

int main() // main function
{
	int choice;
	do
	{	
	// mani menu
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n----------MENU----------");
		printf("\n1--> INSERT");
		printf("\n2--> DELETE");
		printf("\n3--> DISPLAY");
		printf("\n4--> EXIT");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				insert(); // function call
				printf("\n---Inserted Successfully.---");
				break;
			case 2:
				del(); // function call
				printf("\n---Deleted successfully.---");
				break;
			case 3:
				display(); // function call
				break;
			case 4:
				printf("\nEnd of program. Press any key to exit.");
				getch();
				exit(0);
		}
	} while(choice != 4);
}

void insert()
{
	int no;
	printf("\nEnter the number to be added :");
	scanf("%d",&no);
	
	if(rear < (SIZE - 1))
	{
		q[++rear] = no;
		if(front == -1)
		front = 0; // -->front = front + 1	
		}
		else
		{
			printf("\nQueue Overflow");
		}
}

void del()
{
	if(front == -1)
	{
		printf("\nQueue UNderflow");
		return;
	}
	else
	{
		printf("\nDeleted item :-->%d",q[front]);
	}
	if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		front = front +1;
	}
}

void display()
{
	int i;
	if(front == -1)
	{
		printf("\nQueue is empty");
		return;
	}
	for(i = front;i <= rear;i++)
	printf("\t%d",q[i]);
}
