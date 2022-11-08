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
    
    vector<int> vec;
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        recurr(root);
        sort(vec.begin(),vec.end());
        for(int i=1;i<vec.size();i++){
            if(vec[i]-vec[i-1]<ans) ans= vec[i]-vec[i-1];
        }
        return ans;
    }
    void recurr(TreeNode* root){
        if(root==NULL ) return ;
        vec.push_back(root->val);
        recurr(root->left);
        recurr(root->right);
    }
};