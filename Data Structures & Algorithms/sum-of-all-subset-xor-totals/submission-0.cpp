class Solution {
public:
    int ans = 0;

    void dfs(vector<int>& nums, int index, int currXor){

        if(index == nums.size()){
            ans += currXor;
            return;
        }

        // Include current element
        dfs(nums, index + 1, currXor ^ nums[index]);

        // Exclude current element
        dfs(nums, index + 1, currXor);
    }

    int subsetXORSum(vector<int>& nums) {

        dfs(nums, 0, 0);

        return ans;
    }
};