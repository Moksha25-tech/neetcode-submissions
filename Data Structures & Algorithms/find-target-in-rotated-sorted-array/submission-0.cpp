class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            m[nums[i]] = i;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                return m[nums[i]];
            }
        }

        return -1;
    }
};