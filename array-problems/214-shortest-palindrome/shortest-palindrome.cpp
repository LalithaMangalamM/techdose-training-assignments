class Solution {
public:
    string shortestPalindrome(string s) {
     int n = s.size();
    int j = 0;

    // Find the largest palindrome starting at the beginning of the string
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == s[j]) {
            j++;
        }
    }

    // If the entire string is a palindrome
    if (j == n) {
        return s;
    }

    // Get the suffix which is not a part of the palindrome
    string suffix = s.substr(j);
    string prefix = suffix; // This will be reversed to create the prefix
    reverse(prefix.begin(), prefix.end());

    // Recurse with the part that needs to be mirrored
    return prefix + shortestPalindrome(s.substr(0, j)) + suffix;
    }
};