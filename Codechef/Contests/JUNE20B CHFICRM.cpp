#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[1024] = {0}, five = 0, ten = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (int i = 0; i < n; i++)
        {
            if (i == 0 && a[i] != 5 || (a[i] == 10 && five <= 0) || (a[i] == 15 && ten <= 0 && five < 2))
            {
                flag = true;
                break;
            }
            else if (a[i] == 5)
                five++;
            else if (a[i] == 10)
            {
                ten++;
                five--;
            }
            else if (a[i] == 15)
            {
                if (ten)
                    ten--;
                else
                    five -= 2;
            }
        }
        if (flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}