class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int ct = 1;
        int ma = 1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1] == nums[i] + 1){
                ct++;
            }
            else if(nums[i+1] == nums[i]){
                continue;
            }
            else{
                ma = max(ma,ct);
                ct = 1;
            }
        }
        ma = max(ma,ct);
        return ma;
    }
};
