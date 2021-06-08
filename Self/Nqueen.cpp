#include <vector>
#include <iostream>

using namespace std;
bool isSafe(int ans[][10], int i, int j, int queens)
{
    //Check for top element
    for (int row = 0; row < i; row++)
    {
        if (ans[row][j] == 1)
        {
            return false;
        }
    }
    int x = i, y = j;
    //Check for left diagonal
    while (x >= 0 && y >= 0)
    {
        if (ans[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    //Check right diagonal
    x = i, y = j;
    while (x >= 0 && y < queens)
    {
        if (ans[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}

bool solve(int ans[][10], int qpsf, int queens)
{
    if (qpsf == queens)
    {
        for (int i = 0; i < queens; i++)
        {
            for (int j = 0; j < queens; j++)
            {
                if (ans[i][j] == 1)
                {
                    cout << "Q ";
                }
                else
                {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }

    for (int j = 0; j < queens; j++)
    {
        if (isSafe(ans, qpsf, j, queens))
        {
            ans[qpsf][j] = 1;
            bool nextpq = solve(ans, qpsf + 1, queens);
            if (nextpq)
            {
                return true;
            }

            ans[qpsf][j] = 0;
        }
    }
    return false;
}

bool solveNqueens(int queens)
{
    int ans[10][10] = {0};
    solve(ans, 0, queens);
}

int main()
{
    int t;
    int queens;
    cin >> t;
    while (t--)
    {
        cin >> queens;
        solveNqueens(queens);
    }
    return 0;
}