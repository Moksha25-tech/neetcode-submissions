class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int f = word1.size();
        int s = word2.size();

        string op;
        int i = 0, j = 0;

        while (i < f || j < s) {
            if (i < f && j < s) {
                op.push_back(word1[i++]);
                op.push_back(word2[j++]);
            }
            else if (i == f && j < s) {
                op.push_back(word2[j++]);
            }
            else {
                op.push_back(word1[i++]);
            }
        }

        return op;
    }
};