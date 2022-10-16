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
    vector<int> ans;
    bool findTarget(TreeNode* root, int k) {
        inorderTraversal(root);
        int n=ans.size();
        if(n==1) return false;
        int i=0,j=n-1;
        while(j>i){
          if(ans[i]+ans[j]==k) return true;
            else if((ans[i]+ans[j])>k) j--;
            else i++;
        }
        return false;
    }
    void inorderTraversal(TreeNode* root){
        if(root==NULL) return ;
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
    }
};