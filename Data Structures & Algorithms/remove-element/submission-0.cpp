class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k=0;
        vector<char>ans;
        for(int i=0;i<n;i++){
            if(nums[i] != val){
                ans.push_back(nums[i]);
                k++;
            }
        }
        int nn = ans.size();
        for(int i= nn;i<n;i++){
            ans.push_back('_');
        }
        for(int i=0;i<n;i++){
            nums[i] = ans[i];
        }
        return k;
    }
};