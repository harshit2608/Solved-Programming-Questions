#include <iostream>

using namespace std;

int N;
int arr[110];

void solution()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int peaks = 0;
    for (int i = 1; i < N - 1; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
        {
            peaks++;
        }
    }
    cout << peaks << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        solution();
    }
}