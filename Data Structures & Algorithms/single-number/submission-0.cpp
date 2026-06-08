class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
             mp[nums[i]]++;
        }
        for(auto p: mp){
            if(p.second == 1){
                return p.first;
            }
        }
    }
};
