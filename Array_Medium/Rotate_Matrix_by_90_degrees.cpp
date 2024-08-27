class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        //transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

   //reverse all rows
        for(int i=0;i<n;i++){
            int l=0;
            int r=n-1;
            while(l<r){
                swap(matrix[i][l],matrix[i][r]);
                l++;
                r--;
            }
        }
    
        
    }
};