class Solution {
public:
    bool checkValidString(string s) {
        // int left = 0;
        // int right = s.size() - 1;
        // while(left<=right){
        //     if(left == right){
        //         if(s[left] == '('|| s[left] == ')'){
        //             return false;
        //         }
        //         else{
        //             return true;
        //         }
        //     }
        //     if(s[left] == ')' && s[right] == ')' || s[left] == '(' && s[right] == '(' || s[left] == ')' && s[right] == '('){
        //         return false;
        //     }
        //     left++;
        //     right--;
        // }
        // return true;
        int leftMin = 0, leftMax = 0;

        for(char c: s){
            if(c == '('){
                leftMin++;
                leftMax++;
            }
            else if(c == ')'){
                leftMin--;
                leftMax--;
            }
            else{
                leftMin--;
                leftMax++;
            }
            if(leftMax<0) return false;
            if(leftMin<0) leftMin = 0;
        }
        return leftMin == 0;
    }
};
