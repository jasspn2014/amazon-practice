//
// Created by jassp on 01-07-2020.
//

#include<iostream>
using namespace std;
#define N 9


void printBoard(int board[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int board[N][N], int row, int col, int num)
{
    if(board[row][col] != 0)
        return false;

    for(int i=0;i<N;i++)
    {
        if(board[i][col] == num)
            return false;
        if(board[row][i] == num)
            return false;
    }

    int boxrow = row/3;
    int boxcol = col/3;
    int gridRowStart = boxrow * 3;
    int gridColStart = boxcol * 3;

    for(int i = gridRowStart;i<gridRowStart+3;i++)
    {
        for(int j = gridColStart;j<gridColStart+3;j++)
        {
            if(board[i][j] == num)
                return false;
        }
    }

    return true;
}

bool solveSudoku(int board[N][N], int row, int col)
{
    if(row == N)
        return true;
    if(col == N)
        return solveSudoku(board,row+1,0);
    if(board[row][col] != 0)
        return solveSudoku(board,row,col+1);

    for(int currNum = 1;currNum<=N;currNum++)
    {
        if(isSafe(board,row,col,currNum))
        {
            board[row][col] = currNum;

            if(solveSudoku(board,row,col+1))
                return true;

            board[row][col] = 0;
        }
    }
    return false;
}

int main()
{
    int board[N][N] = {{0,5,1,0,0,0,9,2,0},
                       {0,9,7,0,0,6,0,5,0},
                       {0,0,3,0,5,0,8,0,7},

											 {0,3,6,0,7,0,0,0,0},
                       {1,0,2,4,0,9,6,0,5},
                       {0,0,0,0,6,0,3,1,0},

											 {3,0,5,0,8,0,2,0,0},
                       {0,2,0,7,0,0,5,6,0},
                       {0,1,4,0,0,0,7,3,0}};

    if(solveSudoku(board,0,0))
        printBoard(board);


}
