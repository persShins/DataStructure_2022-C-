#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char* s1 = malloc(sizeof(char) * 30);
	char* s2 = malloc(sizeof(char) * 30);
	char* p1, * p2;
	p1 = s1;
	p2 = s2;
	scanf("%s", s1);
	scanf("%s", s2);

	int i;
	if (strlen(s1) > strlen(s2)) {
		for (i = 0; i < strlen(s1); i++) {
			if (p1[i] == p2[i])
				printf("O ");
			else
				printf("X ");
		}
	}
	else {
		for (i = 0; i < strlen(s2); i++) {
			if (p1[i] == p2[i])
				printf("O ");
			else
				printf("X ");
		}


		return 0;
	}
}