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
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        findSum(root,low,high);
        return sum;
        
    }
    void findSum(TreeNode* root,int a,int b){
        if(root==NULL) return;
        if(root->val >=a && root->val<=b) sum+=root->val;
        findSum(root->left,a,b);
        findSum(root->right,a,b);
    }
};