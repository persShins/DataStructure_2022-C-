#include <stdio.h>
#include <string.h>

void Shiftleft(char*, int);

int main(){
	char s[30];
	int num;

	scanf("%s", s);
	scanf("%d", &num);

	Shiftleft(s, num);

	return 0;
}

void Shiftleft(char* src, int len){
	
	int a = strlen(src);
	char shift[30];
	memset(shift, 0, sizeof(shift));

	for(int i = 0; i<len; i++)
	{
		shift[a-1] = src[0];
		for(int j = 0; j < a-1; j++)
		{
			shift[j] = src[j+1];
		}
		strcpy(src, shift);
	}
	printf("%s", shift);
}

