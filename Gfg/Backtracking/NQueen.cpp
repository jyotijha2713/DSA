#include<iostream>
#define N 4
using namespace std;

//This is a problem of placing N queens on a (N x N) chessboard so that no two queens attacks each other. 
bool isSafe(int board[][N], int row, int col)
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
bool solveNQUtil(int board[][N],int col)
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
    int board[N][N]={0};
    solveNQUtil(board,0);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}