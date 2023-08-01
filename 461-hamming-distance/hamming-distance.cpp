class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        int a=x^y;
        while(a)
        {
            count+=a&1;
            a>>=1;
        }
        
        return count;
    }
};