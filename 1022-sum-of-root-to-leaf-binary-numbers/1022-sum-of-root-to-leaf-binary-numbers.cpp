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
    int sumRootToLeaf(TreeNode* root) {
        int temp=0;
        inorder(root,temp);
        return sum;
    }
    void inorder(TreeNode* root,int temp){
        if(root==NULL) {
            return ;
        }
        if(root->val==0) temp=2*temp;
        else if(root->val==1) temp=2*temp+1;
        if(root->left==NULL && root->right==NULL){
            sum+=temp;
        }
        inorder(root->left,temp);
        inorder(root->right,temp);
    }
};