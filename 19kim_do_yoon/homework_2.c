#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char* st = malloc(sizeof(char) * 20);
	int i, n = 0;
	
	scanf("%s", st);
	scanf("%d", &n);



	for (i = n; i < strlen(st); i++)
		printf("%c", st[i]);

	for (i = 0; i < n; i++) 
		printf("%c", st[i]);

		return 0;
	}
