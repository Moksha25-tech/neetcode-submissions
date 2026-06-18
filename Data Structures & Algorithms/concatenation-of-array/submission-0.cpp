class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> an(nums);
        nums.insert(nums.end(),an.begin(),an.end());
        return nums;
    }
};                                                                                                                                                           