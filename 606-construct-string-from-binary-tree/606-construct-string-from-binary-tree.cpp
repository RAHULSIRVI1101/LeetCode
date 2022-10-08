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
    string tree2str(TreeNode* root) {
        string res="";
        inorder(root,res);
        return res;
        
    }
    void inorder(TreeNode* root,string &res){
        if(root==NULL) return ;
        res+=to_string(root->val);
        if(!(root->left || root->right)) return ;
        
        res+="(";
        inorder(root->left,res);
        res+=")";
        
        if(root->right){
            res+="(";
            inorder(root->right,res);
            res+=")";
        }
        
        
    }
};