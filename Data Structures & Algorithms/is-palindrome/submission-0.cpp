class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string t;
        for(char c:s){
            if(isalnum(c)){
                t += (char)tolower(c);
            }
        }
        int left = 0;
        int right = (int)t.size()-1;
        while(right>=left){
            if(t[right] != t[left]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
