#include<stdio.h>
int fac(int n){
	int i, a=1;
	for(i = 1;i<=n;i++){
		a *= i;
	}
	return a;
}
int main(void)
{
	int b = 0, c = 0;
	scanf("%d",&b);
	c = fac(b);
	printf("%d", c);
	return 0;
}
