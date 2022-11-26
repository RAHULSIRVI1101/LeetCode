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
    bool isCousins(TreeNode* root, int x, int y) {
     
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int a=0,b=0;
            int size=q.size();
            while(size--){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->val==x)a++;
                if(temp->val==y)b++;
                if(temp->left && temp->right){
                if((temp->left->val==x && temp->right->val==y) || (temp->left->val==y && temp->right->val==x)) return false;
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
                    if(a==1 && b==1) return true;
        }

        return false;
        
    }
};