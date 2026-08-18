class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>>row(9);
        vector<unordered_set<int>>col(9);
        vector<unordered_set<int>>box(9);
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                int boxe=(i/3)*3+(j/3);
                if(board[i][j]=='.')
                {
                    continue;
                }
                else if(row[i].count(board[i][j])||col[j].count(board[i][j])||box[boxe].count(board[i][j]))
                {
                    return false;
                }
                else{
                    row[i].insert(board[i][j]);
                    col[j].insert(board[i][j]);
                    box[boxe].insert(board[i][j]);
                }
            }
        }
        return true;
    }
};
