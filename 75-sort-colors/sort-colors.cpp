class Solution {
public:

    int partition(vector<int>&nums, int low, int high)
    {
        int i=low;
        int p = nums[high];
        for(int j=low;j<high;j++)
        {
            if(nums[j]<=p)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
        int temp = nums[i];
        nums[i] = nums[high];
        nums[high] = temp;
        return i;
    }

    void quick(vector<int>&nums, int low, int high)
    {
        if(low<high)
        {
            int p = partition(nums,low,high);
            quick(nums,low,p-1);
            quick(nums,p+1,high);
        }
    }
    void sortColors(vector<int>& nums) {
       quick(nums, 0, nums.size()-1);
    }
};
