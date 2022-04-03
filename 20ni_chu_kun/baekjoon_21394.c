#include<stdio.h>

int main()
{
    int T;
    int arr[9] = {0, };
    int result[1000];
    scanf("%d", &T);
    for(int n = 0; n < T; n++)
    {
        int all = 0;
        for(int i = 0; i < 9; i++)
        {
            scanf("%d", &arr[i]);
            all += arr[i];
        }
        if(arr[5] != 0)
        {
            arr[8] += arr[5];
            arr[5] = 0;
        }

        int cnt = 0;
        for(int i = 8; i >= 0; i--)
        {
            for(int j = 0; j < arr[i]; j++)
            {
                if(cnt >= 0)
                {
                    result[cnt] = i+1;
                    cnt = -(cnt + 1);
                }
                else
                {
                    result[all + cnt] = i + 1;
                    cnt = -cnt;
                }
            }
        }
        for(int i = 0; i < all; i++)
            printf("%d ", result[i]);
        printf("\n");
    }
    return 0;
}