#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//* Day 0: Weighted Mean */

int main(void)
{
	int N = 0;
	double x = 0;
	double w = 0;
	double mw = 0;

	scanf("%d", &N);
	int arr[2 * N];

	for (int i = 0; i < 2 * N; i++)
		scanf("%d", &arr[i]);
	for(int i = 0; i < N; i++)
		x = x + arr[i] * arr[N + i];
	for(int i = 0; i < N; i++)
		w += arr[N + i];
	mw = x / w;
	printf("%.1lf", mw);
}

//* Day 0: Mean, Median, and Mode *//
/*
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
	int arr2[N];
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
	mean = mean / N;
	printf("%.1f\n", mean);
	printf("%.1f\n", median);
	printf("%d", mode);
	return 0;
}
*/