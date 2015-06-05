#include <stdio.h>

int linear_search(int arr[], int n, int x)
{
	int i;

	for(int i = 0; i < n; i++)
	{
		if(arr[i] == x)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 5};
	int x = 3;
	int n = sizeof(arr)/sizeof(0);

	printf("%d is available at the index %d\n", x, linear_search(arr, n, x));

	return 0;
}
