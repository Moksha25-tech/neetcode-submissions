class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> fi;
        
        for (string op : operations) {
            if (op == "C") {
                fi.pop_back();
            } 
            else if (op == "D") {
                fi.push_back(fi.back() * 2);
            } 
            else if (op == "+") {
                fi.push_back(fi.back() + fi[fi.size() - 2]);
            } 
            else {
                fi.push_back(stoi(op)); // convert string to int
            }
        }
        
        int sum = 0;
        for (int x : fi) sum += x;
        return sum;
    }
};
