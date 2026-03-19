#include<iostream>
#define N 4
using namespace std;

bool isSafe(int maze[][4],int x,int y)
{
    if(maze[x][y]==1) return true;
    else return false;
}
bool solveMazeUtil(int maze[][4], int x, int y, int sol[][4])
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
    return true;
}
int main()
{
    int maze[4][4]={
        {1,0,0,0},
        {1,1,1,1},
        {0,1,0,0},
        {1,1,1,1}
    };
    int sol[4][4]={0};
    cout<<solveMazeUtil(maze,0,0,sol);
}