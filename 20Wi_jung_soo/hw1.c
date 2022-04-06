/*문자열 입력받고 숫자 N입력받은후
맨앞글자를 맨뒤로 이동 (n번만큼 반복)*/
#include <stdio.h>
#include <string.h>

void swap(char *s, char *s1, int a);

int main () {
    char s[100];
    char s1[100];
    int n, i;
    scanf(" %s", s); 
    scanf(" %d", &n); 
    swap(s,s1, n);          
    printf(" %s", s1);  
}

void swap(char *s, char *s1, int a){
    int j, i;
    for(i = 0 ; i<a ; i++){
        for(j=0;j<strlen(s);j++){
            s1[j]= s[j+1];
        }
        s1[j] = s[0];
        s = s1;
    }
}
