#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, sum = 0, ans = 0, l_b = 0, u_b = 0;
        cin >> n >> l >> r;
        vector<int> v(n);
        cin >> v[0];
        // for (int i = 1; i < n; i++)
        // {
        //     cin >> v[i];
        // }
        // cout << "\n";
        sort(v.begin(), v.end());

        cout << ans << "\n";
    }
}