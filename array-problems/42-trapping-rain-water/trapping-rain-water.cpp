class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0, n = height.size();
        int left = height[0], right = height[n - 1], i = 1, j = n - 2;
        if(n<3)
        return 0;
        while (i <= j) {
            if (left < right) {
                if (left <= height[i]) {
                    left = height[i];
                } else {
                    ans += left - height[i];
                }
                i++;

            } else {
                if (right <= height[j]) {
                    right = height[j];
                } else {
                    ans += right - height[j];
                }
                j--;
            }
        }
        return ans;
    }
};