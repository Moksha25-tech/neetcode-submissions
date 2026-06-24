class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cash = 0;
        vector<int>arr(3);
        for(int i=0;i< bills.size();i++){
            if(bills[i] == 5){
                arr[0]++;
            }
            else{
                if(bills[i] == 5){
                    arr[0]++;
                }
                else if(bills[i] == 10){
                    arr[1] ++;
                }
                else{
                    arr[2]++;
                }
                int x = bills[i] -5;
                if(x == 5){
                    if(arr[0] == 0){
                        return false;
                    }
                    arr[0]--;
                }
                else if( x== 10){
                    if(arr[1] == 0){
                        if(arr[0]>=2){
                            arr[0] = arr[0] - 2;
                        }
                        else{
                            return false;
                        }
                    }
                }
                else if(x == 15){
                    if(arr[1] >= 1 && arr[0] >= 1){
                        arr[1]--;
                        arr[0]--;
                    }
                    else if(arr[1] ==0 && arr[0] >=3){
                        arr[0] = arr[0] - 3;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};