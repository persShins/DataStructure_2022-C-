#include <stdio.h>

int main(void){
    int num;
    int fact;

    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        fact *= i;
    }

    printf("%d\n", fact);
    
    return 0;
}
