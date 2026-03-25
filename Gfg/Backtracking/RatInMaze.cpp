#include<iostream>
#define N 4
using namespace std;

//A maze is given as N x N binary matrix of blocks. The source or start block is the upper leftmost block i.e. maze[0][0] and destination block is lower rightmost block i.e. maze[N-1][N-1].
//A rat starts from sources and has to reach destination. The rat can move in two directions only: right and down in the matrix.
//Find the path for the rat with the given conditions.
bool isSafe(int maze[][N],int row,int col)
{
    if(maze[row][col]==1) return true;
    else return false;
}
bool solveMazeUtil(int maze[][N], int x, int y, int sol[][N])
{
    if(x == N-1 && y == N-1){
        sol[x][y]=1;
        return true;
    }
    if(isSafe(maze,x,y)==true){
        sol[x][y]=1;
        if(solveMazeUtil(maze,x+1,y,sol)==true)
        return true;
        if(solveMazeUtil(maze,x,y+1,sol)==true)
            return true;
        sol[x][y]=0;
        return false;
    }
    return false;
}
int main()
{   
    int maze[N][N];
    cout<<"Enter the maze matrix: "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>maze[i][j];
        }
    }
    int sol[N][N]={0};
    if(solveMazeUtil(maze,0,0,sol)){
        cout<<"The solution matrix is: "<<endl;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"No possible path.";
    }
}