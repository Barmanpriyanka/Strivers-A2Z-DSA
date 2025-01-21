// User function template for C++

/*
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  void solve(Node* root,int k,int &count,vector<int>path)
  {
      if(root==NULL)
      {
          return ;
      }
      path.push_back(root->data);
      solve(root->left,k,count,path);
       solve(root->right,k,count,path);
       int size = path.size();
       int sum=0;
       for(int i =size-1;i>=0;i--)
       {
           sum=sum+path[i];
           if(sum==k)
           {
               count++;
           }
       }
       path.pop_back();
       
  }
  
    int sumK(Node *root, int k) {
        // code here
        vector<int>path;
        int count=0;
        solve(root,k,count,path);
        return count;
    }
};