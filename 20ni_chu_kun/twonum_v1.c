#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int* arr = NULL;
    *returnSize = 2;
    for(i=0; i<numsSize - 1; i++)
    {
        for(j=i+1; j<numsSize; j++)
        {
            if(nums[i]+nums[j]==target){
                arr = (int*)malloc(sizeof(int)*2);
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    return arr;
}