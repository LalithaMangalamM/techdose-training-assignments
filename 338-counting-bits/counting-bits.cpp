class Solution {
public:
    vector<int> countBits(int n) {
        vector <int>ans;
        int count=0,x;
        if(n==0)
       ans.push_back(0);
        else
        {
            ans.push_back(0);
            ans.push_back(1);
        }
        
        for(int i=2;i<=n;i++)
        {
            x=i;
            while(x)
            {
                count+=x&1;
                x>>=1;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};