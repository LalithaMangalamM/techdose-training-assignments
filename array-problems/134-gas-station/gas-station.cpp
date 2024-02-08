class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot = 0,start = 0,curr = 0;
        for(int i=0;i<gas.size();i++)
        {
            int delta = gas[i] - cost[i];
            tot+=delta;
            curr+=delta;
            if(curr<0)
            {
                curr=0;
                start=i+1;
            }
        }
        if(tot>=0)
        return start;
        else
        return -1;
        
    }
};