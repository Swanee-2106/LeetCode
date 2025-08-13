class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row,int col,char dig){
        //horizonta check
        for(int j=0;j<9;j++){
            if(board[row][j]==dig){
                return false;
            }
        }
        //vertical check
        for(int i=0;i<9;i++){
            if(board[i][col]==dig){
                return false;
            }
        }
        //grid mein check
        int gridrSt=(row/3)*3;
        int gridcSt=(col/3)*3;
        for(int i=gridrSt;i<=gridrSt+2;i++){
            for(int j=gridcSt;j<=gridcSt+2;j++){
                if(board[i][j]==dig){
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board, int row,int col){
        if(row==9){
            return true;
        }

        int nRow=row,nCol=col+1;
        if(nCol==9){
            nRow=row+1;
            nCol=0;
        }
        if(board[row][col] != '.'){
            return helper(board,nRow,nCol);
        }
        for(char dig='1';dig<='9';dig++){
            if(isSafe(board,row,col,dig)){
                board[row][col]=dig;
                if(helper(board,nRow,nCol)){
                    return true;
                }
                board[row][col]='.';//backtrack step if not fitting
            }
        }
        return false;

    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};