class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row,int col,char dig){
        for(int j=0;j<9;j++){
            if(board[row][j]==dig && j!=col){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==dig && i!=row){
                return false;
            }
        }
        int srow= (row/3)*3;
        int scol= (col/3)*3;
        for(int i=srow;i<=srow+2;i++){
            for(int j=scol;j<=scol+2;j++){
                if(board[i][j]==dig && (i != row || j != col)){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(!isSafe(board,i,j,board[i][j]) && board[i][j]!='.'){
                    return false;
                }
            }
        }
        return true;
    }
};