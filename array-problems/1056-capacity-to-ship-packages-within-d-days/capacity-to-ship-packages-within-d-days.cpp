class Solution {
public:
    bool isvalid(int mid,vector<int>&weights,int days){
        int sum=0;
        int ans=1;
        for(auto x: weights){
            sum+=x;
            if(x>mid){
                return false;
            }
            if(sum>mid){
                ans++;
                sum=x;
            }
        }
        if(ans<=days){
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=1;
        int high=0;
        for(auto x: weights){
            high+=x;
        }
        int ans=high;
        
        while(high>=low){
            int mid=low+(high-low)/2;
            if(isvalid(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};