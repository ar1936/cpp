#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            mp[v[i]]++;
            if (v[i] != v[0])
                flag = true;
        }
        if (sum % n != 0)
        {
            cout << -1 << "\n";
            continue;
        }
        int temp = sum / n, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > temp)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}