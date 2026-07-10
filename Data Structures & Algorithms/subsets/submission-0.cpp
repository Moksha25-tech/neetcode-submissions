class Solution {
public:

    vector<vector<int>>ans;
    vector<int>curr;

    void dfs(int index, vector<int>& nums){
        if(index == nums.size()){
            ans.push_back(curr);
            return;
        }

        //Include nums[index]
        // index is the current level in your decision tree
        curr.push_back(nums[index]); // Choose
        dfs(index+1, nums);          //Explore
        curr.pop_back();             // Undo

        //Exclude nums[index]
        dfs(index+1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(0, nums);
        return ans;
    }
};