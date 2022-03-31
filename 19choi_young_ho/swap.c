#include <stdio.h>
#include <string.h>

void swap(char*, int);

int main(){
	
	char s[30];
	int num;

	scanf("%s", s);
	scanf("%d", &num);

	swap(s, num);

	return 0;
}

void swap(char* str, int len){

	char temp;
	int a = strlen(str);

	for(int i = 0; i < len; i++){
		temp = str[0];
		for(int j = 0; j < a-1; j++){
			str[j] = str[j+1];
		}
		str[a-1] = temp;
	}
	printf("%s", str);
}



