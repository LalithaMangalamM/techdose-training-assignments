class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++)
    {
        if(i >= 1 && nums[i] == nums[i - 1]) 
            continue;
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(j != i+1 && nums[j] == nums[j - 1])
            {
                cout<<j<<" "<<j -1<<endl;
                                continue;
            }

            int k = j + 1, l = nums.size() - 1;
            while(k < l)
            {
                // if(i != j && j != k && k != l && l != i )
            //    { 
                long long sum = nums[i] + nums[j];
                sum += nums[k]+ nums[l];
                if(sum == target)
                {
                    res.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k - 1]) k++;
                    while(k < l && nums[l] == nums[l + 1]) l--;

                }
                else if(sum < target)
                k++;
                else l--;
            //    }
            }
        }
    }
    return res;

    }
};