class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // brute approach
        // vector<int>ans(nums.size()-k+1);

        // for(int i=0;i<=nums.size()-k;i++)
        // {
        //     int max = nums[i];
        //     for(int j=1;j<k;j++)
        //     {
        //         if(max<nums[i+j])
        //         max=nums[i+j];
        //     }
        //     ans[i] = max;
        //     max=0;
        // }
        // return ans;
        priority_queue<pair<int,int>> pq;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            while(!(pq.empty()) && pq.top().second<=i-k){
                pq.pop();
            }
            pq.push({nums[i],i});
            if(i >= k-1){
                res.push_back(pq.top().first);
            }
        }
        return res;
    }
};