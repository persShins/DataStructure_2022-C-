#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* s1 = malloc(sizeof(char));
	char* s2 = malloc(sizeof(char));

	scanf("%s", s1);
	scanf("%s", s2);

	int a1 = strlen(s1);
	int a2 = strlen(s2);

	if(a1>a2)
		for(int i=0; i<a1; i++)
			if(*(s1 + i) == *(s2 + i))
				printf("O");
			else
				printf("X");
	else
		for(int i=0; i<a2; i++)
			if(*(s2 + i) == *(s1 + i))
				printf("O");
			else
				printf("X");
}
