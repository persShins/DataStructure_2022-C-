#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a;
	printf ("층 수를 입력하세요. ");
	scanf_s("%d", &a);
	for (int i = 0; i <= a; i++)
	{
		for (int j = a - i - 1; j >= 0; j--)
			printf(" ");
		for (int k = 0; k < 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
}