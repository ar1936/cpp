#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, sum1 = 0, sum2 = 0, count = 0;
        cin >> n >> m;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum1 += x;
            v1.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            sum2 += x;
            v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());
        int j = v2.size();

        if (sum1 > sum2)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < n and i < m; i++)
        {
            if (sum1 > sum2)
            {
                break;
            }
            else
            {
                if (v1[i] < v2[i])
                {
                    sum1 = sum1 + v2[i] - v1[i];
                    sum2 = sum2 + v1[i] - v2[i];
                    count++;
                }
                else
                {
                    count = -1;
                    break;
                }
            }
        }
        if (count == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}