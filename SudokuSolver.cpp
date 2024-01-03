
#include "SudokuSolver.h"


// checking square
bool isValidBox(vector<vector<char>>& board ,int i ,int j)
{
    unordered_set <char> hash;
    int row=(i/3)*3;
    int col=(j/3)*3;
    for(int k=row; k<row+3;k++)
    {
        for(int m=col ; m<col+3;m++ )
        {
            if(board[k][m]!='.')
            {
                if(hash.find(board[k][m]) != hash.end())
                    return false;
                else hash.insert(board[k][m]);
            }
        }
    }
    return true;
}
// checking row
bool isValidRow(vector<vector<char>>& board ,int i)
{
    unordered_set <char> hash;
    for(int j=0 ; j<board[0].size();j++ )
    {
        if(board[i][j]!='.')
        {
            if(hash.find(board[i][j]) != hash.end())
                return false;
            else hash.insert(board[i][j]);
        }
    }
    return true;
}
// checking col
bool isValidCol(vector<vector<char>>& board ,int j)
{
    unordered_set <char> hash;
    for(int i=0 ; i<board.size();i++ )
    {
        if(board[i][j]!='.')
        {
            if(hash.find(board[i][j]) != hash.end())
                return false;
            else hash.insert(board[i][j]);
        }
    }
    return true;
}

static bool Aux(vector<vector<char>>& board)
{
    for(int i=0 ; i<board.size();i++)
    {
        for(int j=0 ; j<board[0].size();j++)
        {
            if(board[i][j]=='.') {

                for(char c='1'; c<='9';c++)
                {
                    board[i][j]=c;
                    if(isValidRow(board,i) && isValidCol(board,j) &&
                       isValidBox(board,i,j) && Aux(board))
                        return true;

                    board[i][j]='.';
                }
                return false;

            }

        }
    }
    return true;
}
void solveSudoku(vector<vector<char>>& board) {
    Aux(board);
}

