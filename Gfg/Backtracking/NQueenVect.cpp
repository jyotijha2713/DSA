#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>> &board,int row, int col)
{
    //check row on left
    for(int i=0;i<col;i++){
        if(board[row][i]==1)
            return false;
    }

    //check upper diagonal on left side
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]==1)
            return false;
    }

    //check lower diagonal on left side
    for(int i=row, j=col; i<board.size() && j>=0; i++,j--){
        if(board[i][j]==1)
            return false;
    }
    return true;
}
bool solveNQUtil(vector <vector<int>> &board,int col)
{
    int N=board.size();
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
    int N;
    cout<<"Enter the size of the board: ";
    cin>>N;
    vector<vector<int>> board(N,vector <int>(N,0));
    if(solveNQUtil(board,0)){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"No possible arrangement.";
    }
}