class Solution
{
public:
    // Function to find out minimum steps Knight needs to reach target position.
    int minStepToReachTarget(vector<int> &kp, vector<int> &tp, int N)
    {
        int dx[] = {1, -1, -1, 1, 2, -2, 2, -2};
        int dy[] = {-2, -2, 2, 2, -1, -1, 1, 1};
        vector<vector<int>> mat(N, vector<int>(N, 0));

        int ans = INT_MAX;
        int s0 = kp[0], s1 = kp[1], e0 = tp[0], e1 = tp[1];

        if (s0 == e0 && s1 == e1)
        {
            return 0;
        }

        queue<tuple<int, int, int>> q;
        q.push(make_tuple(s0 - 1, s1 - 1, 0));
        while (!q.empty())
        {
            tuple<int, int, int> tup = q.front();
            int t1 = get<0>(tup), t2 = get<1>(tup), t3 = get<2>(tup);
            q.pop();

            if (t1 == e0 - 1 && t2 == e1 - 1)
            {
                return t3;
            }

            for (int i = 0; i < 8; ++i)
            {
                if (t1 + dx[i] >= 0 && t1 + dx[i] < N && t2 + dy[i] >= 0 &&
                    t2 + dy[i] < N && mat[t1 + dx[i]][t2 + dy[i]] == 0)
                {
                    q.push(make_tuple(t1 + dx[i], t2 + dy[i], t3 + 1));
                    mat[t1 + dx[i]][t2 + dy[i]] = 404;
                }
            }
        }
        return ans;
    }
};