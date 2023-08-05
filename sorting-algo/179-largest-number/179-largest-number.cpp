class Solution {
public:
    string largestNumber(vector<int>& nums) {
   
        string str="";
        for(int i=0;i<nums.size()-1;i++)
        {
            int min=i;
            string res= to_string(nums[min]);
            for(int j=i+1;j<nums.size();j++)
            {
                string res1=to_string(nums[j]);
                if((res+res1)<(res1+res))
                min=j;
                res=to_string(nums[min]);
            }
           swap(nums[i],nums[min]);
           str+=res;
        }
         if(nums[0]==0)
        return "0";
        return str+to_string(nums[nums.size()-1]);
        
    }
};
