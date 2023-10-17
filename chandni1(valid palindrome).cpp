class Solution {
public:
    bool isPalindrome(string s) {
        string alphanumericString;

        for (char c : s) {
            if (isalnum(c)) {
                if (isupper(c)) {
                    c = tolower(c); 
                }
                alphanumericString += c;
            }
        }

        int left = 0;
        int right = alphanumericString.length() - 1;

        while (left < right) {
            if (alphanumericString[left] != alphanumericString[right]) {
                return false; 
            }
            left++;
            right--;
        }

        return true; 
    }
};
