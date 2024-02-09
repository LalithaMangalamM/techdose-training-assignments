class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        std::cin.tie(0);
        int sum = 0, left = 0, right = 0, window = INT_MAX;
        int n = nums.size();
        while (right < n) {
            sum += nums[right];
            while (sum >= target) {
                window = min(window, right + 1 - left);
                sum -= nums[left++];
            }
            right++;
        }
        return window == INT_MAX ? 0 : window;
    }
};