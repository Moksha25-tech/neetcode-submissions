class Solution {
public:

    vector<vector<int>>ans;
    vector<int> curr;

    void dfs(int index, vector<int>& candidates, int target){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(target < 0){
            return;
        }
        if(index == candidates.size()){
            return;
        }

        curr.push_back(candidates[index]);
        dfs(index + 1, candidates, target - candidates[index]);
        curr.pop_back();

        int next = index + 1;

        while (next < candidates.size() &&
               candidates[next] == candidates[index]) {
            next++;
        }

        dfs(next, candidates, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        dfs(0,candidates,target);
        return ans;
    }
};