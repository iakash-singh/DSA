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
    int xdepth,ydepth,xparent,yparent;
    void solve(TreeNode* root,int x,int y,int dep,int parent_val){
        if(root==NULL){
            return ;
        }
        if(root->val==x){
            xdepth = dep;
            xparent = parent_val;
            return ;
        }
        if(root->val==y){
            ydepth = dep;
            yparent = parent_val;
            return ;
        }

        solve(root->left,x,y,dep+1,root->val);
        solve(root->right,x,y,dep+1,root->val);


    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val==y){
            return false;
        }
        solve(root,x,y,0,0);

        if(xdepth==ydepth && xparent!=yparent){
            return true;
        }
        return false;
    }
};