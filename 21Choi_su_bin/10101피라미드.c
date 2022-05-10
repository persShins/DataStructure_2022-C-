#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i < j)
				printf("  ");
			else if (i % 2 == 1 || j % 2 == 0)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}