//
// Created by jassp on 30-06-2020.
//

#include<iostream>
using namespace std;
const int N = 4;

void printSolution(int sol[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}


bool isSafe(int maze[N][N],int x,int y)
{
    if(x >= 0 && x<N && y>=0 && y<N && maze[x][y] == 1)
        return true;

    return false;
}


bool solveMaze(int maze[N][N], int x, int y, int sol[N][N])
{
    if(x == N-1 && y == N-1)
    {
        sol[x][y] = 1;
        return true;
    }

    if(isSafe(maze,x,y))
    {
        sol[x][y] = 1;
        if(solveMaze(maze,x+1,y,sol))
            return true;
        if(solveMaze(maze,x,y+1,sol))
            return true;

        sol[x][y] = 0;
        return false;
    }

    return false;

}

int main()
{
    int maze[N][N] = {{1,0,0,0},
                      {1,1,1,1},
                      {0,1,0,0},
                      {1,1,1,1}};

    int sol[N][N] = { 0 };

    if(solveMaze(maze,0,0,sol))
        printSolution(sol);
    else
        cout<<"No Path Exists";
}
