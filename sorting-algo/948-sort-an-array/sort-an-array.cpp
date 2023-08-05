class Solution {
public:
     vector<int> mergeSort(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums;
        int mid = nums.size() / 2;
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());
        left = mergeSort(left);
        right = mergeSort(right);
        return merge(left, right);
    }
    
    vector<int> merge(vector<int>& left, vector<int>& right) {
        int leftSize = left.size(), rightSize = right.size();
        vector<int> s(leftSize + rightSize);
        int index = 0, leftIndex = 0, rightIndex = 0;
        while (leftIndex < leftSize && rightIndex < rightSize) {
            if (left[leftIndex] <= right[rightIndex]) {
                s[index++] = left[leftIndex++];
            }
            else {
                s[index++] = right[rightIndex++];
            }
        }
        
        while (leftIndex < leftSize) {
            s[index++] = left[leftIndex++];
        }
        
        while (rightIndex < rightSize) {
            s[index++] = right[rightIndex++];
        }
        return s;
    }
     
    vector<int> sortArray(vector<int>& nums) {
       return mergeSort(nums);       

    }
};