class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ma = INT_MIN;

        for(int x = 0; x < n; x++) {
            int sum = 0;

            for(int i = x; i < n; i++) {
                sum += nums[i];
                ma = max(ma, sum);
            }
        }

        return ma;
    }
};