class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        int i=0;
        while(i<n){
            int start = intervals[i][0];
            int end = intervals[i][1];
            i++;
            while(i<n && end>=intervals[i][0])
            {
                end=max(end,intervals[i][1]);
                i++;
            }
            vector<int> temp;
            temp.push_back(start);
            temp.push_back(end);
            result.push_back(temp);
        }
        return result;
    }
};