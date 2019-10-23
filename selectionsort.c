#include<stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionsort(int arr[], int n)
{
	int i, j, min_index;
	for (i=0; i<n-1; i++)
	{
		min_index = i;
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index = j;
			}
		}
		swap(&arr[min_index], &arr[i]);
	}
}

void printarray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d \n", arr[i]);
	}
}

int main()
{
	int arr[] = {23, 43, 11, 1, 6, 3, 53, 22, 35};
	int n = sizeof(arr)/sizeof(arr[0]);

	printf("Given array is: \n");
	printarray(arr, n);

	selectionsort(arr, n);

	printf("Sorted array is\n");
	printarray(arr, n);

	return 0;
}