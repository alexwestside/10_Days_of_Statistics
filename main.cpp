#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//* Day 0: Mean, Median, and Mode *//

int main()
{
	int N = 0;
	double mean = 0;
	double median = 0;
	int mode = 0;
	int med = 0;
	int tmp = 0;
	int mo = 0;

	scanf("%d", &N);
	int arr[N];
	med = N / 2;
	//printf("%d\n", med);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		mean += arr[i];
	}
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
/*
	for (int i = 0; i < N; i++)
	{
		printf("%d | ", arr[i]);
	}
 */
	//printf("\n");
	int arr2[N];
	//arr2[N - 1] = 0;
	for (int j = 0; j < N; j++)
	{
		arr2[j] = 0;
		for (int i = 0; i < N; i++)
		{
			if (arr[j] == arr[i])
				arr2[j] = arr2[j] + 1;
		}
		if (mo < arr2[j])
		{
			mode = arr[j];
			mo = arr2[j];
		}
	}
	median = (arr[med] + arr[med - 1]) / (double )2;
	printf("%.1f\n%.1f\n%d", mean / N, median, mode);
	return 0;
}

/*
51284.9
51113.0
6392
 */