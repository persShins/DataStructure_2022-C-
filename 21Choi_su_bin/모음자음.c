#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS

main()
{
	char eng;
	printf("영어 알파벳 하나를 입력하세요. : ");
	scanf_s("%c",&eng);
	if (eng == 'a'|| eng == 'e' || eng == 'i' || eng == 'o' || eng == 'u')
		printf("%c는 모음입니다.", eng);
	else
		printf("%c는 자음입니다.", eng);
}