int solve(vector<int> &rooms, int target)
{
    if (rooms.empty())
        return -1;

    int n = rooms.size();
    for (int i = 0; i < n; i++)
    {
        if (rooms[i] >= target)
            return rooms[i];
    }
    return -1;
}