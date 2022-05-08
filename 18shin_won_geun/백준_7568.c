#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int array_kg[50] = { 0, };
	int array_hw[50] = { 0, };
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &array_kg[i]);
		scanf("%d", &array_hw[i]);
	}
	int rank[50] = { 0, };
	for (int i = 0; i < N-1; i++)
	{
		for (int n = i+1; n < N; n++)
		{
			if (array_kg[i] > array_kg[n] && array_hw[i] > array_hw[n])
				rank[n] += 1;
			else if (array_kg[i] < array_kg[n] && array_hw[i] < array_hw[n])
				rank[i] += 1;
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d ", rank[i]+1);
	return 0;
}