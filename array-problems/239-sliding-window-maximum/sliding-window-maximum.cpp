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
        //  int n=nums.size();
        // deque<int> max_idx;//Double-ended queue storing index for max
        // vector<int> ans(n-k+1);

        // for(int i=0; i<n; i++){
        //     while(!max_idx.empty() && nums[i]>=nums[max_idx.back()]) 
        //         max_idx.pop_back();// pop back the indexes for smaller ones
        //     max_idx.push_back(i);  // push back the index for larger one

        //     if (max_idx.front()==i-k) // index=i-k should not in the window
        //         max_idx.pop_front(); 
        //     if (i>=k-1)
        //         ans[i-k+1]=nums[max_idx.front()]; //Max element for this window
        // }
        // return ans;
    }
};