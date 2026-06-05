class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        if (n == 1){
            return 0;
        }

        int jumps = 0;
        int i = 0;

        while(i<n-1){
            if(i+nums[i]>=n-1){
                jumps++;
                break;
            }

            int best = i;
            int far = -1;

            for(int j=i;j<=i+nums[i];j++){
                if (j+nums[j]>far) {
                    far = j + nums[j];
                    best = j;
                }
            }

            i = best;
            jumps++;
        }

        return jumps;
    }
};