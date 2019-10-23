#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int queue[n], max = n, choice = 1, j = 1, i, front = 0, rear = 0;
	printf("Operations on Queue\n");
	printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");

	do
	{
		switch(choice)
		{
			case 1:
			{
				if(rear == max)
				{
					printf("Queue Overflow\n");
				}
				else
				{
					printf("Enter Value %d\n", j++);
					scanf("%d", &queue[rear++]);
				}
				break;
			}

			case 2:
			{
				if(front == rear)
				{
					printf("Queue Underflow\n");
				}
				else
				{
					printf("%d Deleted\n", queue[front]);
					front++;
				}
				break;
			}

			case 3:
			{
				if(front == rear)
				{
					printf("Queue is empty\n")
;				}
				else
				{
					for(i=front; i<rear; i++)
					{
						printf("%d\n", queue[i]);
					}
				}
				break;
			}

			case 4:
			{
				exit(0);
			}

			default:
			{
				printf("Check the options\n");
			}
		}
	} while(choice != 4);
}