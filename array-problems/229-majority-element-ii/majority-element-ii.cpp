class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> nums_map;
        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            nums_map[nums[i]]++;
        }

        n = n/3;
        for(auto x : nums_map)
        {
            if(x.second > n)
                res.push_back(x.first);
        }
        return res;
        
    }
};