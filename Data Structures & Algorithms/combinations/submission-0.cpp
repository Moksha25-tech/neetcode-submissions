class Solution {
public:

    vector<int>num;
    vector<vector<int>> ans;
    vector<int>curr;

    void dfs(int index,vector<int>& num, int target){

        if(num.size() == 1){
            curr.push_back(num[0]);
            ans.push_back(curr);
            return;
        }

        if(target == 0){
            ans.push_back(curr);
            target = 2;
            return;
        }

        if(index == num.size()){
            return;
        }

        curr.push_back(num[index]);
        dfs(index+1,num, target - 1);
        curr.pop_back();

        dfs(index+1, num,target);
    }

    vector<vector<int>> combine(int n, int k) {
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        
        dfs(0,num,k);
        return ans;
    }
};