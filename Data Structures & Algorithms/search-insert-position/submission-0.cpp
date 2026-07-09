class Solution {
public:

    int bs(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= target){
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        if(nums[left] >= target){
            return left;
        }
        else{
            return left + 1;
        }
    }

    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        if (n == 1) {
            if (target <= nums[0])
                return 0;
            return 1;
        }

        if (target <= nums[0])
            return 0;

        if (target > nums[n - 1])
            return n;

        return bs(nums, target);
    }
};