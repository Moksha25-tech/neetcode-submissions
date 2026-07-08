class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left, right;
        if(n%2 == 0){
            left = n/2 - 1;
            right = n/2;
        }
        else{
            left = n/2 - 1;
            right = n/2 + 1;
        }
        while(left>=0 && right <n){
            int k = s[left];
            s[left] = s[right];
            s[right] = k;
            left--;
            right++;
        }
        for(int x:s){
            cout << x ;
        }
    }
};