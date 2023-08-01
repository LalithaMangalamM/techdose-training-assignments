class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=0,count=0;
        for(int i=0;i<sizeof(int)*8;i++)
        {
            count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j] & (1<<i))
                    count++;
            }
            if(count>(nums.size()/2))
                num+=(1<<i);
            
        }
    count=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==num)
            count++;
    }
    if(count>=(nums.size()/2))
        return num;
       return 0;
       }
};