class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,left=0,right=0,window=INT_MAX;
        int n=nums.size();
        while(right<n)
        {
            sum+=nums[right];
            if(sum>=target)
            {
                while(sum>=target)
                {
                    sum-=nums[left];
                    left++;
                }
                window=min(window,right-left+2);
            }            
            right++;
        }
        return window==INT_MAX?0:window;
        
    }
};