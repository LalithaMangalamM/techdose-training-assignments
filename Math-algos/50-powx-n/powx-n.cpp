class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        long long pow=n;
        if(pow<0)
        pow=-pow;
        cout<<pow<<endl;
        while(pow>0)
        {
            if(pow%2==1)
            {
              result*=x;
              pow--;
            }
        
            x=x*x;
            pow/=2;
        }
        if(n<0)
        {
            return 1.0/result;
        }
        return result;
    }
};