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
    int findTilt(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=0;
        helper(root,ans);
        return ans;
    }
    int helper(TreeNode* root,int &res){
        if(root==NULL) return 0;
        int leftSum=helper(root->left,res);
        int rightSum=helper(root->right,res);
        res+=abs(rightSum-leftSum);
        return leftSum+rightSum+root->val;
    }
};