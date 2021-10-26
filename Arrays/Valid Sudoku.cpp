// Leetcode - Valid Sudoku

// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(validateColumns(board)==false) return false;

        for(int i=0;i<9;i++){
            if(validateRow(board[i]) == false) return false;
        }

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                
                if(validateSquare(board,i,j)==false) return false;
 
            }
        }

        return true;
    }
    bool validateRow(vector<char> row){
        unordered_map<char,int> hm;
        for(int i=0;i<row.size();i++){
            if(row[i] != '.'){
               hm[row[i]]++;
               if(hm[row[i]] > 1) return false; 
            }
            
        }
        return true;
    }
    bool validateColumns(vector<vector<char>> board){
        unordered_map<char,int> hm;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    hm[board[j][i]]++;
                    if(hm[board[j][i]] > 1) return false;
                }
            }
            hm.clear();
        }
        return true;
    }
    bool validateSquare(vector<vector<char>> board,int row, int column){
        unordered_map<char,int> hm;
        for(int i=row;i<row+3;i++){
            for(int j=column;j<column+3;j++){
                if(board[i][j]!='.'){
                   hm[board[i][j]]++;
                   if(hm[board[i][j]] > 1) return false;

                }   
            }
        }
        return true;
        
    }
};