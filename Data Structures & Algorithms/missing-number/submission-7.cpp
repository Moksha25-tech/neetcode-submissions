class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int start = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] != start){
                return start;
            }
            else{
                start++;
            }
        }
    }
};
