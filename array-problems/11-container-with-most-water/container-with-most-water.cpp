class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size()-1 , maximumArea = 0;
        while(left < right){
            int current = min(height[left], height[right]) * (right - left);
            maximumArea = max(maximumArea, current);

            if(height[left] < height[right]){
                left++;
            }
            else
            right--;
        }
        return maximumArea;
    }
};