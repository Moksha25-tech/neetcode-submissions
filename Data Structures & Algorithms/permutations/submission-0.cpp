class Solution {
public:

    vector<int>curr;
    vector<vector<int>>ans;
    vector<int>visited;

    void dfs(vector<int>& nums){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(visited[i] == 1){
                continue;
            }

            visited[i] = 1;
            curr.push_back(nums[i]);
            dfs(nums);

            curr.pop_back();
            visited[i] = 0;
        }
    } 

    vector<vector<int>> permute(vector<int>& nums) {
        visited.resize(nums.size(),0);
        dfs(nums);
        return ans;
    }
};