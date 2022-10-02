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
    int Maxi=-1;
    int diameterOfBinaryTree(TreeNode* root) {
        findMax(root);
        return Maxi;
    }
    void findMax(TreeNode* root){
        if(root==NULL) return;
        int lh=height(root->left);
        int rh=height(root->right);
        
        Maxi=max(Maxi,lh+rh);
        
        findMax(root->left);
        findMax(root->right);
    }
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return 1+max(lh,rh);
    }
};