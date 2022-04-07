#include <stdio.h>
#include <string.h>

void comp(char*, char*);

int main()
{
	char s1[30];
	char s2[30];
	scanf(" %s", s1);
	scanf(" %s", s2);
	comp(s1, s2);
}

void comp(char *s1, char *s2)
{
	int max;

	if (strlen(s1) > strlen(s2))
	{
		max = strlen(s1);
	}
	else
	{
		max = strlen(s2);
	}

	for (int i = 0; i < max; i++)
	{
		if (s1[i] == s2[i])
		{
			printf("O");
		}
		else
		{
			printf("X");
		}
	}
}
