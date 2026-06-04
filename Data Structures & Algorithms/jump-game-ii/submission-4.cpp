class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i = 0, jump = 0;
        if(n == 1){
            return 0;
        }
        while(i<n-1){
            if(i+nums[i] >= n-1){
                jump++;
                return jump;
            }
            if(nums[i+1] > i + nums[i]){
                jump++;
                i++;
                if(i>=n-1){
                    return jump;
                }
            }
            else{
                i=i+nums[i];
                jump++;
                if(i>=n-1){
                    return jump;
                }
            }
        }
    }
};
