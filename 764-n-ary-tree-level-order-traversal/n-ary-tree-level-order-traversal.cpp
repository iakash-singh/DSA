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
        vector<Node*> st;
        st.push_back(root);
        while(st.size()){
            int stsize = st.size();
            vector<int> temp;
            for(int j=0;j<stsize;j++){
                Node* node = st[0];
                st.erase(st.begin());
                temp.push_back(node->val);
                for(Node* n : node->children){
                    st.push_back(n);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};