#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int x;
	int y;
}array;

int compare(array *a, array *b)
{
	if (a->x == b->x)
	{
		if (a->y < b->y)
		{
			return 0;
		}
	}
	else if (a->x < b->x)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int num, temp;
	scanf("%d", &num);
	array *list;
	list = (array*)malloc(num * sizeof(array));
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &list[i].x, &list[i].y);
	}
	for (int i = 0; i < num - 1; i++)
	{
		for (int q = i + 1; q < num; q++)
		{
			if (compare(&list[i],&list[q]))
			{
				temp = list[i].x;
				list[i].x = list[q].x;
				list[q].x = temp;
				temp = list[i].y;
				list[i].y = list[q].y;
				list[q].y = temp;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d %d\n", list[i].x, list[i].y);
	}
	return 0;
}