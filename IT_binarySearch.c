#include <stdio.h>

int IT_binarySearch(int arr[], int l, int r, int x)
{
	int mid = l + (r-l)/2;

	while(l <= r)
	{
		if(arr[mid] == x)
		{
			return mid;
		}

		if(arr[mid] > x)
		{
			l = mid + 1;
		}

		else
			r = mid-1;
	}

	return -1;
}

int main(void)
{
	int arr[] = {2, 6, 45, 89, 74};
	int n;
	int x = 1;

	n = sizeof(arr)/sizeof(arr[0]);
	int result = IT_binarySearch(arr, 0, n-1, x);

	(result == -1)?printf("The number is not available in the array\n"):printf("The number is available in the %d index\n", result);

	return 0;
}
