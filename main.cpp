#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


//* Day 1: Interquartile Range *//

int main(void)
{
    int N = 0;
    for(int i = 0; i < N; i++)
        scanf("%d", &N);
    int elem[N];
    int freq[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &elem[i]);
    for (int i = 0; i < N; i++)
        scanf("%d", &freq[i]);



}

//* Day 1: Quartiles *//
/*
int ft_med(int arr[], int N)
{
    int med = 0;

    if (N % 2)
        med = arr[N / 2];
    else
        med = (arr[N / 2] + arr[N / 2 - 1]) / 2;
    return (med);
}

int *cmp(int *i, int *j)
{
    return (int *) (*i - *j);
}

int *cmp2(int *i, int *j)
{
    return (int *) (*j - *i);
}

int main()
{
	int N = 0;
    int n = 0;
    int med = 0;

	scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    qsort(arr, N, sizeof(int), (int(*)(const void *, const void *)) cmp);
    med = ft_med(arr, N);
    int Q2 = med;
    int Q1 = 0;
    int i = 0;
    while(arr[i] < med)
        i++;
    Q1 = ft_med(arr, i);
    qsort(arr, N, sizeof(int), (int(*)(const void *, const void *)) cmp2);
    int Q3 = 0;
    i = 0;
    while(arr[i] > med)
        i++;
    Q3 = ft_med(arr, i);
    printf("%d\n%d\n%d", Q1, Q2, Q3);
}
*/
//* Day 1: Standard Deviation *//
/*
int main()
{
	int N = 0;
	int med = 0;
	double stdiv = 0;

	scanf("%d", &N);
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		med += arr[i];
	}
	med = med / N;
	for(int i = 0; i < N; i++)
		stdiv += pow((arr[i] - med), 2);
	stdiv = sqrt(stdiv / N);
	printf("%.1f", stdiv);
}
*/

//* Day 0: Weighted Mean */
/*
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
*/
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