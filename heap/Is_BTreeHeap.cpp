class Solution {
  public:
  int countNodes(struct Node* root)
  {
      //Base case
      if(root==NULL)
      return 0;
      int ans=1+countNodes(root->left)+countNodes(root->right);
      return ans;
  }
  bool isCBT(struct Node* root,int index,int totalCount){
      if(root==NULL)
      {
          return true;
          
      }
      if(index>=totalCount)
      {
          return false;
          
      }
      
      else{
         bool  left=isCBT(root->left,2*index+1,totalCount);
         bool right=isCBT(root->right,2*index+2,totalCount);
         return (left && right);
      }
      
  }
  
  bool ismaxheap(struct Node* root)
  {
      //leaf node
      if(root->left==NULL && root->right==NULL){
          return true;
      }
      //if the root has only left child
      if(root->right==NULL)
      {
          return (root->data>root->left->data);
      }
      //both caseses
      else {
          bool left=ismaxheap(root->left);
          bool right=ismaxheap(root->right);
          return (left && right && root->data > root->left->data && root->data > root->right->data );
      }
      
  }
  
    bool isHeap(struct Node* tree) {
        int index=0;
        int totalCount=countNodes(tree);
        if(isCBT(tree,index,totalCount) && ismaxheap(tree))
        {
            return true;
        }
        else{
            return false;
        }
    }
};