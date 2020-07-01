#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long int t,print=1;
	cin >> t;
	while (t--)
	{
		long int N, B, min, sum = 0, count = 0, size;
		cin >> N >> B;
		long int arr[N];
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		size = sizeof(arr) / sizeof(arr[0]);
		sort(arr, arr + size);
		min = arr[0];
		for (int i = 0; i < N; i++)
		{
			if (B < min)
			{
                count = 0;
            }
			else
			{
				sum = sum + arr[i];
				if (sum <= B)
				{
					count++;
				}
			}
		}
        cout << "Case #" << print << ": " << count << endl;
        print++;
    }
	return 0;
}