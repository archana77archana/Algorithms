#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
	if(r >= l)
	{
		int mid = l + (r-l)/2;

		if(arr[mid] == x)
		{
			return mid;
		}

		if(arr[mid] > x)
		{
			return binarySearch(arr, l, mid-1, x);
		}

		return binarySearch(arr, mid+1, r, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = {1, 2, 3, 5, 78, 95};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 78;

	int result = binarySearch(arr, 0, n-1, x);

	(result == -1)?printf("The number is not available in the array\n"):printf("The number is in %d index\n", result);

	return 0;
}
