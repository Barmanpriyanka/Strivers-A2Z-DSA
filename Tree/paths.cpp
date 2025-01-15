/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
   void dfs(Node* node, vector<int>& path, vector<vector<int>>& result) {
        if (!node) return;

        
        path.push_back(node->data);

    
        if (!node->left && !node->right) {
            result.push_back(path);
        } else {
        
            dfs(node->left, path, result);
            dfs(node->right, path, result);
        }

        // Backtrack
        path.pop_back();
    }
  
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> result;
        vector<int> path;
        dfs(root, path, result);
        return result;
    
           
    }
};