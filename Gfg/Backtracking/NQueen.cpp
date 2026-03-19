#include<iostream>
#define N 4
using namespace std;

bool isSafe(int board[][4], int row, int col)
{
    // Check this row on left side
    for (int i = 0; i < col; i++)
        if (board[row][i] == 1)
            return false;

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return false;

    // Check lower diagonal on left side
    for (int i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j] == 1)
            return false;

    return true;

}
bool solveNQUtil(int board[][4],int col)
{
    if(col>=N)
        return true;
    for(int i=0;i<N;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;
            if(solveNQUtil(board,col+1))
                return true;
            board[i][col]=0;
        }
    }
    return false;
}
int main()
{
    int board[4][4]={0};
    cout<<solveNQUtil(board,1);
}