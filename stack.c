#include <stdio.h>
void push(void);
void pop(void);l
void delete(void);
int stack[100],choice,n,x,i,top;

int main()
{
	top = -1;
	printf("Enter stack size, MAX = 100\n");
	scanf("%d", &n);

	printf("Stack operations using array\n");
	printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
	printf("Enter the no. of operation you want to perform.\n");
	
	do
	{
		printf("Enter Choice\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}

			case 2:
			{
				pop();
				break;
			}

			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("Exit Point\n");
				break;
			}
			default:
			{
				printf("Please enter a valid choice(1/2/3/4)\n");
			}
		} 
	} while(choice != 4);
	return 0;
}

void push()
{
	if (top>=n-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the value:\n");
		scanf("%d", &x);
		top++;
		stack[top] = x;
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		printf("Deleted %d value\n", stack[top]);
		top--;
	}
}

void display()
{
	if(top<=-1)
	{
		printf("Stack Empty\n");
	}
	else
	{
		for(i=top; i>-1; i++)
		{
			printf("%d\n", stack[i]);
		}
	} getch();
}