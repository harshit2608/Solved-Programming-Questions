#include <bits/stdc++.h>

using namespace std;

int check(int M, int N, int i, int j)
{
    return (i >= 0 and i < M and j >= 0 and j < N);
}

int COVID19(vector<vector<int>> &mat, int M, int N)
{
    queue<pair<int, int>> q;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j] == 0)
            {
                q.push({i, j});
            }
        }
    }

    int timer = -1;
    vector<pair<int, int>> coor = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            int X = q.front().first;
            int Y = q.front().second;
            for (int i = 0; i < coor.size(); i++)
            {
                if (check(M, N, X + coor[i].first, Y + coor[i].second) and
                    mat[X + coor[i].first][Y + coor[i].second] == 1)
                {
                    q.push({(X + coor[i].first), (Y + coor[i].second)});
                    mat[X + coor[i].first][Y + coor[i].second] = 0;
                }
            }
            q.pop();
        }
        timer++;
    }

    return timer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int M, N;
        cin >> M >> N;

        vector<vector<int>> mat(M, vector<int>(N, 0));

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> mat[i][j];
            }
        }

        cout << COVID19(mat, M, N) << "\n";
    }

    return 0;
}