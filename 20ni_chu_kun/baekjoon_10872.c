#include<stdio.h>

int factor(int num){
	if(num > 1)
		return num * factor(num - 1);
	else return 1;
}

int main(){
	int a;
	scanf("%d", &a);
	printf("%d", factor(a));
	return 0;
}
