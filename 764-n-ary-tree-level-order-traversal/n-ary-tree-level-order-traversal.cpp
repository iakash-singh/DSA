/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(Node* root) {
        
        if(!root){
            return ans;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int stsize = q.size();
            vector<int> temp;
            for(int j=0;j<stsize;j++){
                Node* node = q.front();
                q.pop();
                temp.push_back(node->val);
                for(Node* n : node->children){
                    q.push(n);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};