#include <bits/stdc++.h>
#define N 5
using namespace std;

void printBoard(int board[N][N])
{
	cout<<"\nThe Placement of Queen in "<<N<<"X"<<N<<" Board as :\n"<<endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << " " << board[i][j] << " ";
		printf("\n");
	}
}

bool isSafe(int board[N][N], int row, int col)
{
	int i, j;

	//checking row
	for (i = 0; i < col; i++)
		if (board[row][i])
			return false;

	//left-up diagonal
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;

	//right-up diagonal
	for (i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j])
			return false;

	return true;
}


bool Nqueen(int board[N][N], int col)
{
	
	if (col >= N)  //base condition
		return true;

	
	for (int i = 0; i < N; i++) {
		
		if (isSafe(board, i, col)) {
			
			board[i][col] = 1;

		
			if (Nqueen(board, col + 1))
				return true;

			
			board[i][col] = 0; 
		}
	}

	return false;
}


int main()
{
	int board[N][N] = {0};

	if (Nqueen(board, 0) == false) {
		cout << "Solution does not exist";
		return false;
	}

	printBoard(board);
	return 0;
}

