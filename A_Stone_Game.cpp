#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mn = 0, mx = 0, temp1 = 0, temp2 = 0;
        cin >> n;
        vector<int> v(n), temp(n);

        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
        }
        v = temp;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n; i++)
        {
            if (temp[0] == v[i])
            {

                mn = i;
            }
            else if (temp[n - 1] == v[i])
            {
                mx = i;
            }
        }
        temp1 = n - mn;
        temp2 = n - mx;
        cout << min(max(mn + 1, mx + 1), min(max(temp1, temp2), min(mn + 1 + temp2, mx + 1 + temp1))) << "\n";
    }
}
