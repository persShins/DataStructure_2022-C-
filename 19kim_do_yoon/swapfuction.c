#include<stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);

	printf("%d %d", a, b);
}