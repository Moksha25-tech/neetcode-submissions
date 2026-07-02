class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        // Prefix sum 0 occurs once before we start
        mp[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            // If (prefixSum - k) exists, add its frequency
            if (mp.find(prefixSum - k) != mp.end()) {
                count += mp[prefixSum - k];
            }

            // Store the current prefix sum
            mp[prefixSum]++;
        }

        return count;
    }
};