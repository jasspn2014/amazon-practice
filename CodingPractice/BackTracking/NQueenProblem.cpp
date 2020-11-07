////
//// Created by jassp on 30-06-2020.
////
//
//
//#include<iostream>
//using namespace std;
//
//const int N = 4;
//
//void printBoard(int board[N][N])
//{
//    for(int i=0;i<N;i++){
//        for(int j = 0;j<N;j++)
//        {
//            cout<<board[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}
//
//bool isSafe(int board[N][N], int row, int col)
//{
//    int i,j;
//    // Check Each Col in row before the passed placing column
//    for(i=0;i<col;i++)
//        if(board[row][i])
//            return false;
//
//    // Checking Upper Left diagonal
//    for(i=row,j=col;i>=0 && j>=0;i--,j--)
//        if(board[i][j])
//            return false;
//
//    // Checking Lower Right Diagonal
//    for(i=row,j=col;j>=0 && i<N;i++,j--)
//        if(board[i][j])
//            return false;
//
//    return true;
//
//}
//
//bool placeNQueens(int board[N][N], int col)
//{
//    if(col >= N)
//        return true;
//
//    for(int i=0;i<N;i++)
//    {
//        if(isSafe(board,i,col)) {
//            board[i][col] = 1;
//
//            if (placeNQueens(board, col + 1))
//                return true;
//
//            board[i][col] = 0;
//        }
//    }
//
//    return false;
//}
//
//
//int main()
//{
//    int board[N][N] = { 0 };
//    if(placeNQueens(board,0))
//        printBoard(board);
//
//    else
//        cout<<"No Solution Exists";
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//


#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;
#define N 4

void printSolution(int board[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
}

bool isSafe(int board[N][N], int row, int col)
{
    for(int i=0;i<=col;i++)
        if(board[row][i])
            return false;

    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
        if(board[i][j])
            return false;

    for(int i=row,j=col;i<N && j>=0;i++,j--)
        if(board[i][j])
            return false;

        return true;

}

bool placeNQueens(int board[N][N], int col)
{
    if(col == N){
        printSolution(board);
        return true;
    }
    bool res = false;
    for(int i=0;i<N;i++)
    {
        if(isSafe(board,i,col))
        {
            board[i][col] = 1;

            res = placeNQueens(board, col + 1) || res;

            board[i][col] = 0;
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int board[][N] = {{0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
										};
    if(!placeNQueens(board,0))
        cout<<"No Solution Exists";


    return 0;
}

// Code By Jasmeet Singh
