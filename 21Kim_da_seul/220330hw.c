#pragma warning (disable:4996)
#pragma warning (disable:6031)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change(char *, int);

int main()
{
	int rep;
	char *s1 = malloc(sizeof(char) * 30);
	scanf(" %s", s1);
	scanf(" %d", &rep);

	change(s1, rep);
	printf("%s", s1);
	free(s1);

}

void change(char *s1, int num)
{
	char temp;
       	int size = strlen(s1);
	for (int i = 0; i < num; i++)
	{
		temp = s1[0];
		for (int j = 0; j < size - 1; j++)
		{
			s1[j] = s1[j + 1];
		}
		s1[size - 1] = temp;
       	}
}
