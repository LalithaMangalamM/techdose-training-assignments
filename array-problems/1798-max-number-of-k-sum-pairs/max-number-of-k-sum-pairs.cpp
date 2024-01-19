class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res = 0;
        sort(nums.begin(),nums.end());
        int left = 0, right = nums.size()-1; 
        while(left<right){
            if(nums[left]+nums[right] == k)
            {
                res += 1;
                ++left;
                --right;
            }
            else if(nums[left]+nums[right]>k)
                --right;
            else
            ++left;
        }
        return res;
        
    }
};