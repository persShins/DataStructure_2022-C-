#pragma warning (disable:4996)
#pragma warning (disable:6031)
#include <stdio.h>

int main()
{
	long long test, sum = 0;
	int rep = 0;
	scanf(" %lld", &test);

	for (int i = 1; ; i++)
	{
		sum += i;
		rep++;	
		if (sum > test)	
		{
			rep--;
			break;
		}
	}
	printf("%d", rep);		
	return 0;
}
