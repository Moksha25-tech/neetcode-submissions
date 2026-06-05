class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return 0;

        int jumps = 0;
        int i = 0;

        while (i < n - 1) {

            // Can reach the end directly
            if (i + nums[i] >= n - 1) {
                jumps++;
                break;
            }

            int bestIndex = i;
            int farthest = -1;

            // Check all reachable positions
            for (int j = i + 1; j <= i + nums[i]; j++) {
                if (j + nums[j] > farthest) {
                    farthest = j + nums[j];
                    bestIndex = j;
                }
            }

            i = bestIndex;
            jumps++;
        }

        return jumps;
    }
};