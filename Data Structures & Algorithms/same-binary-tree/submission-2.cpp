/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void inorder(TreeNode* root, vector<string>& r) {
        if (!root){
            r.push_back("N"); 
            return;
        }
        r.push_back(to_string(root->val));  // visit node
        inorder(root->left, r);       // visit left subtree
        inorder(root->right, r);      // visit right subtree
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p || !q) return false;
        vector<string> rp, rq;
        inorder(p, rp);
        inorder(q, rq);
        int sp = rp.size();
        int sq = rq.size();
        if(sp!=sq){
            return false;
        }
        for(int i=0;i<sp;i++){
            if(rp[i] != rq[i]){
                return false;
            }
        }
        return true;
    }
};
