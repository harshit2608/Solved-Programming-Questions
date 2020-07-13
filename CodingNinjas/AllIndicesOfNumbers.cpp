#include <iostream>

using namespace std;
#define MX (int(1e5))

void call(int arr[], int size, int x, int output[], int& counter, int currentindex)
{
	if (currentindex == size)
	{
		return;
	}
	if (arr[currentindex] == x)
	{
		output[counter] = currentindex;
		counter++;
	}
	call(arr, size, x, output, counter, ++currentindex);
}

int xpos(int arr[], int size, int x, int output[])
{
	int counter = 0;
	call(arr, size, x, output, counter, 0);
	return counter;
}

int main()
{
	int n, x;
	int arr[MX], output[MX];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> x;

	int res = xpos(arr, n, x, output);
	for (int i = 0; i < res; i++)
	{
		cout << output[i] << " ";
	}
	return 0;
}