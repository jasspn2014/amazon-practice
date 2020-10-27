#include<bits/stdc++.h>
using namespace std;

const int N = 8;
void printBoard(vector<vector<int>> &board){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

bool isSafe(vector<vector<int>> &board, int i, int j){
	if(i < 0 || i >= N || j < 0 || j >=N || board[i][j] != -1){
		return false;
	}
	return true;
}

bool setKnightTour(vector<vector<int>> &board, int i, int j, int move){
	//static int move = 0;
	if(move == 64){
		printBoard(board);
		return true;
	}
	// cout << "Hey" << endl;
	if(isSafe(board,i,j)){
		board[i][j] = move;
		if(setKnightTour(board,i+2,j+1,move+1))
			return true;
		if(setKnightTour(board,i+1,j+2,move+1))
			return true;
		if(setKnightTour(board,i-1,j+2,move+1))
			return true;
		if(setKnightTour(board,i-2,j+1,move+1))
			return true;
		if(setKnightTour(board,i-2,j-1,move+1))
			return true;
		if(setKnightTour(board,i-1,j-2,move+1))
			return true;
		if(setKnightTour(board,i+1,j-2,move+1))
			return true;
		if(setKnightTour(board,i+2,j-1,move+1))
			return true;

		board[i][j] = -1;

	}
	return false;
}

int main(){
	vector<vector<int>> board(N,vector<int>(N,-1));
	setKnightTour(board,0,0,0);
}
