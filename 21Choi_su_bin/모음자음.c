#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS

main()
{
	char eng;
	printf("���� ���ĺ� �ϳ��� �Է��ϼ���. : ");
	scanf_s("%c",&eng);
	if (eng == 'a'|| eng == 'e' || eng == 'i' || eng == 'o' || eng == 'u')
		printf("%c�� �����Դϴ�.", eng);
	else
		printf("%c�� �����Դϴ�.", eng);
}