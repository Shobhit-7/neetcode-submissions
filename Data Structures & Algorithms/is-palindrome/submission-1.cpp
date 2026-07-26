class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            // Left se non-alphanumeric skip karo
            while (i < j && !isalnum(s[i])) {
                i++;
            }

            // Right se non-alphanumeric skip karo
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            // Dono characters ko lowercase me compare karo
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};