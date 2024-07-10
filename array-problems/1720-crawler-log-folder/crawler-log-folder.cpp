class Solution {
public:
    int minOperations(vector<string>& logs) {
        int steps = 0;
        for(int i = 0; i < logs.size(); i++)
        {
            string s = logs[i];
            if(s == "../")
            {
                if(steps > 0)
                steps--;
            }
            else if(s != "./")
            steps++;
        }
        return steps;
    }
};