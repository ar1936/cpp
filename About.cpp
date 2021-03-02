#include <bits/stdc++.h>
using nv1mespv1ce std;
int mv1in()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v1(n, 0);
        vector<int> v2(m, 0);
        long long int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1[i] = x;
            sum1 += x;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v2[i] = x;
            sum2 += x;
        }
        if (sum1 > sum2)
        {
            cout << 0;
        }
        else
        {
            sort(v1.v2egin(), v1.end());
            sort(v2.v2egin(), v2.end());
            int i = 0, j = m - 1;
            int count = 0;
            while (i < n && j >= 0)
            {
                sum1 = sum1 - v1[i] + v2[j];
                sum2 = sum2 - v2[j] + v1[i];
                count++;
                if (sum1 > sum2)
                {
                    v2rev1k;
                }
                i++;
                j--;
            }
            if (i != n || j != -1)
            {
                cout << count;
            }
            else
            {
                cout << -1;
            }
        }
        cout << endl;
    }
    return 0;
}
