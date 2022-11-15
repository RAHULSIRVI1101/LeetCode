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
        vector<int> r1;
        vector<int> r2;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        inorder(root1,r1); 
        inorder(root2,r2);
        if(r1==r2) return true;
        return false;
    }
    void inorder(TreeNode* root,vector<int> &r){
        if(root==NULL) return ;
        
        
        inorder(root->left,r);
        if(root->left== NULL && root->right==NULL) {
            r.push_back(root->val);
        }
        inorder(root->right,r);
    }
};