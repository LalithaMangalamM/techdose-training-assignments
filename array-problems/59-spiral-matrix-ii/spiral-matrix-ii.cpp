class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n, vector<int>(n));
        int rs=0,cs=0,re=n-1,ce=n-1, k=1;
        while(rs<=re && cs<=ce)
        {
            for(int i=cs;i<=ce;i++)
            {
                mat[rs][i] = k++;
            }
            ++rs;
            for(int i=rs;i<=re;i++)
            {
                mat[i][ce] = k++;
            }
            --ce;
            if(rs<=re)
            {
                for(int i=ce;i>=cs;i--)
                {
                    mat[re][i]=k++;
                }
                --re;
            }
            if(cs<=ce)
            {
                for(int i=re;i>=rs;i--)
                {
                    mat[i][cs]=k++;
                }
                ++cs;
            }
        }
        return mat;
        
    }
};