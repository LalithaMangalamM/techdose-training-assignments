/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
int *arr;
*returnSize=2;
for(int i=0;i<numsSize;i++)
{
    for(int j=i+1;j<numsSize;j++)
    {
        if(nums[i]+nums[j]==target)
        {
            arr=(int *)malloc(sizeof(int)*2);
            arr[0]=i;
            arr[1]=j;
        }
    }
}
return arr;
}