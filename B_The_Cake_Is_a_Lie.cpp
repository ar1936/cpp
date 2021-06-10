#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (n == 1)
        {
            cout << ((m - 1 == k) ? "YES" : "NO") << "\n";
            continue;
        }
        if ((m - 1 + m * (n - 1)) == k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}