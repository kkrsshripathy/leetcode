#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int n, int target, int* returnSize) {
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[j]==target-nums[i]){
                int *result=malloc(sizeof(int)*2);
                result[0]=i;
                result[1]=j;
                *returnSize= 2;
                return result;
            }
        }
    }
    *returnSize=0;
    return malloc(sizeof(int)*0);
}