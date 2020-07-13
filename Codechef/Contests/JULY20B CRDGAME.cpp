#include <iostream>

using namespace std;

int findSum(long int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, chefcount = 0, mortycount = 0, c, m;
        cin >> n;
        for (long int i = 1; i <= n; i++)
        {
            cin >> c >> m;
            long int chef = findSum(c);
            long int morty = findSum(m);
            if (chef > morty)
            {
                chefcount++;
            }
            else if (morty > chef)
            {
                mortycount++;
            }
            else
            {
                chefcount++;
                mortycount++;
            }
        }
        if (chefcount > mortycount)
        {
            cout << "0 " << chefcount << endl;
        }
        else if (mortycount > chefcount)
        {
            cout << "1 " << mortycount << endl;
        }
        else if (chefcount == mortycount)
        {
            cout << "2 " << chefcount << endl;
        }
    }
    return 0;
}