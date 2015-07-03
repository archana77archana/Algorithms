#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x =*y;
	*y = temp;
}

void sort(int arr[], int n)
{
	int i, j, min;

	for(i = 0; i < n; i++)
	{
		min = i;

		for(j = i+1; j < n; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}

		swap(&arr[min], &arr[i]);
	}
}

void print(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);

	sort(arr, n);

	printf("Sorted Array: \n");
	print(arr, n);

	return 0;
}
