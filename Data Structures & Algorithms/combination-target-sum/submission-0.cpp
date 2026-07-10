class Solution {
public:

    vector<vector<int>> ans;
    vector<int>curr;

    void dfs(int index, vector<int>&candidates, int target){
        if(target == 0){
            ans.push_back(curr);
            return;
        }

        if(target < 0)
            return;

        if(index == candidates.size())
            return;

        curr.push_back(candidates[index]);
        dfs(index, candidates, (target-candidates[index]));
        curr.pop_back();

        dfs(index+1,candidates,target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(0,candidates,target);
        return ans;
    }
};