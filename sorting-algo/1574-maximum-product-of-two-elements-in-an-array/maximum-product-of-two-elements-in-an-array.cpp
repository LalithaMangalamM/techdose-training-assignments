class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                swap(nums[j],nums[j+1]);
            }
        }

        return((nums[n-1]-1)*(nums[n-2]-1));
        
    }
};