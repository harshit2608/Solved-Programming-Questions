bool findPair(int arr[], int size, int n)
{
    sort(arr, arr + size);
    int i = 0, j = 1;
    while (i < size && j < size)
    {
        int dif = arr[j] - arr[i];
        if (dif == n)
        {
            return true;
        }
        else if (dif > n)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return false;
}