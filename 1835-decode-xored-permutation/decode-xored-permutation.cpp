class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        
    int t1 = 0;
    int n = encoded.size();
    for (int i=0 ; i<=n ; i++)
        t1 = t1^(i+1);
        int t2 = 0;
        int prev = 0;
        for (auto a:encoded)
        {
            prev = prev^a;
            t2 = t2^prev;
        }

        int p = t1^t2;
        vector<int> ans;
        ans.push_back(p);
        for (int i=0 ; i<n ; i++)
        {
            p = encoded[i]^p;
            ans.push_back(p);
        }

        return ans;
    }
};