#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int row, col;
        cin >> row >> col;

        char mat[row][col];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }

        int count = 0;
        for (int i = 0; i < col - 1; i++)
        {
            if (mat[row-1][i] == 'D')
            {
                count++;
            }
        }
        for (int i = 0; i < row - 1; i++)
        {
            if (mat[i][col-1] =='R')
            {
                count++;
            }
        }

        cout << count << endl;
    }
}