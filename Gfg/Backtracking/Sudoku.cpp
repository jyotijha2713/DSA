#include<iostream>
using namespace std;

//Given a partially filled 9x9 2D array 'grid[9][9]', assign digits(from 1 to 9) to the empty calls so that every row, column, and subgrid of size 3x3 contains exactly one instance of the digits from 1 to 9.
bool isSafe(int grid[9][9],int row, int col, int num)
{
    //check if exists in the row
    for(int x=0;x<9;x++){
        if(grid[row][x]==num)return false;
    }
    //check if exists in the column
    for(int x=0;x<9;x++){
        if(grid[x][col]==num)return false;
    }

    //check if the num exists in the box
    int startRow = row-(row%3), startCol = col-(col%3);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[i+startRow][j+startCol]==num) 
                return false;
        }
    }
    return true;
}
bool FindUnassignedLocation(int grid[9][9],int &row,int &col)
{
    for(row=0;row<9;row++){
        for(col=0;col<9;col++){
            if(grid[row][col]==0) 
                return true;
        }
    }
    return false;
}
bool SolveSudoku(int grid[9][9])
{
    int row,col;
    if(!FindUnassignedLocation(grid,row,col))
        return true;

        for(int num=1;num<=9;num++){
            if(isSafe(grid,row,col,num)){
                grid[row][col]=num;
                if(SolveSudoku(grid))
                    return true;

                grid[row][col]=0;
            }
        }
    return false;
}
int main()
{
    int grid[9][9]={
        {7,8,0,4,0,0,1,2,0},
        {6,0,0,0,7,5,0,0,9},
        {0,0,0,6,0,1,0,7,8},
        {0,0,7,0,4,0,2,6,0},
        {0,0,1,0,5,0,9,3,0},
        {9,0,4,0,6,0,0,0,5},
        {0,7,0,3,0,0,0,1,2},
        {1,2,0,0,0,7,4,0,0},
        {0,4,9,2,0,6,0,0,7}
    };
    // cout<<"Enter the numbers present in the sudoku puzzle."<<endl;
    // for(int i=0;i<9;i++){
    //     for(int j=0;j<9;j++){
    //         cin>>grid[i][j];
    //     }
    // }
    if(SolveSudoku(grid)){
        cout<<"Solution for the given sudoku exists."<<endl;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"This sudoku cannot be solved.";
    }
}
