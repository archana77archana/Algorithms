#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubblesort(int arr[], int n)
{
	int i, j;

	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-(i+1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void print(int arr[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = {64, 34, 35, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);

	bubblesort(arr, n);
	printf("Sorted array: \n");
	print(arr, n);

	return 0;
}
