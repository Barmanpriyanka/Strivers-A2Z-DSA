/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
  
  void traverseleft(Node *root,vector<int>&ans)
  {
      if(root==NULL)
      {
          return;
      }
      if(root->left==NULL && root->right==NULL)
      {
          return ;
      }
      
      ans.push_back(root->data);
      if(root->left)
      {
           traverseleft(root->left,ans);
      }
      else{
          traverseleft(root->right,ans);
      }
      
  }
  
  void traverseleaf(Node* root,vector<int> &ans)
  {
      if(root==NULL)
      {
          return;
      }
      if(root->left==NULL && root->right==NULL)
      {
          ans.push_back(root->data);
          return;
      }
      traverseleaf(root->left,ans);
      traverseleaf(root->right,ans);
  }
  
  void traverseright(Node* root,vector<int>&ans)
  {
      if(root==NULL)
      {
          return;
      }
      if(root->left==NULL && root->right==NULL)
      {
          return;
      }
      if(root->right)
      {
          traverseright(root->right,ans);
      }
      else{
          traverseright(root->left,ans);
      }
      
      ans.push_back(root->data);
  }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        
        ans.push_back(root->data);
        //print left subtree
      traverseleft(root->left,ans);
      
      //leafnode of right subtree and left subtree
      traverseleaf(root->left,ans);
      traverseleaf(root->right,ans);
      //print right subtree in reverse
      traverseright(root->right,ans);
      return ans;
      
        
    
    }
};