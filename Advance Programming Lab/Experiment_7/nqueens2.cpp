#include <iostream>
using namespace std;

#define v 5

bool canPlace(int board[][v], int n, int x, int y)
{

    // Column
    for (int k = 0; k < x; k++)
    {
        if (board[k][y] == 1)
        {
            return false;
        }
    }

    // Row
    // for(int k=0;k<y;k++)
    // {
    //     if(board[x][k]==1){
    //         return false;
    //     }
    // }

    // Left Diag
    int i = x, j = y;
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }

    // Right Diag
    i = x, j = y;
    while (i >= 0 and j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}

int NQueen(int n, int board[][v], int i)
{
    // Base Case
    if (i == n)
    {
        // Print the board

        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                cout << board[x][y] << " ";
            }
            cout << endl;
        }
        cout << endl;

        return 1;
    }
    // Rec Case
    // Try to place queen at every column/position in the current row
    int cnt = 0;

    for (int j = 0; j < n; j++)
    {
        if (canPlace(board, n, i, j))
        {
            board[i][j] = 1;
            cnt += NQueen(n, board, i + 1);
            board[i][j] = 0;
        }
    }
    return cnt;
}

int main()
{

    int board[v][v] = {0};
    // int n;
    // cin >> n;

    cout << NQueen(v, board, 0) << endl;

    return 0;
}