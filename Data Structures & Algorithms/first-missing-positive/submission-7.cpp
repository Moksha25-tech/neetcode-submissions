class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int s = nums.size();
        vector<int>fin;
        for(int i=0;i<s;i++){
            if(nums[i]>0){
                fin.push_back(nums[i]);
            }
        }
        int mp = INT_MAX;
        int sf = fin.size();
        if(sf == 0){
            return 1;
        }
        if(sf ==1){
            if(fin[0]>1){
                int mp = min(1,fin[0]-1 );
                return mp ;
            }
        }
        for(int i=0;i<sf-1;i++){
            if(fin[0] >1){
                mp = 1;
            }
            if(fin[i+1] == fin[i] + 1){
                    continue;
            }
            else{
                mp = min(mp,fin[i] + 1);
                return mp;                
            }
        }
        mp = min(mp,fin[sf-1] + 1);
        return mp;
    }
};