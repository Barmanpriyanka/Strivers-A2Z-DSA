class Solution {
public:
       bool dfs(vector<vector<char>>& board, vector<vector<bool>>& visited,
         string& word, int i, int j, int k) {
    

    
    if (k == word.size()) return true;

   
    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) return false;

    
    if (visited[i][j] || board[i][j] != word[k]) return false;

    //step1
       visited[i][j] = true;

    //step2
    bool found = dfs(board, visited, word, i+1, j, k+1) ||  // down
                 dfs(board, visited, word, i-1, j, k+1) ||  // up
                 dfs(board, visited, word, i, j+1, k+1) ||  // right
                 dfs(board, visited, word, i, j-1, k+1);    // left

    //step3  backtrack
    visited[i][j] = false;

    return found;
}

    bool exist(vector<vector<char>>& board, string word) {
            int m = board.size(), n = board[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (dfs(board, visited, word, i, j, 0)) return true;
        }
    }
    return false;
    }
};