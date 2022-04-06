#include<stdio.h>
int fac(int n) {
    int i, a = 1;
    for (i = 1; i <= n; i++) {
        a = a * i;
    }
    return a;

}
int main()
{
    int b = 0, c = 0;
    scanf_s("%d", &b);
    c = fac(b);
    printf("%d", c);
    return 0;

}