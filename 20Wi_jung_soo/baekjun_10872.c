#include <stdio.h>

int main() {
    int n, mul=1, i;
    scanf(" %d", &n);
    if(n == 0)
        printf(" %d", n+1);
    else{
        for(i = 1;i<=n;i++){
            mul *= i;
        }
        printf("%d",mul);
    }
}
