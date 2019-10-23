#include<stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubblesort(int arr[], int n)
{
	int i, j;

	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void printarray(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main()
{
	int arr[] = {12, 32,43 ,23, 43, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Given array is\n");
	printarray(arr, n);
	bubblesort(arr, n);
	printf("Sorted Array is\n");
	printarray(arr, n);
}