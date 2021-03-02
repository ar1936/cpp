#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, z;
        cin >> n >> x;
        z = x;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            cin >> y;
            v.push_back(y);
        }
        // for(int i=0;i<n;i++)
        // {
        //     if ((v[i]%x)==0)
        //     {
        //         for(int j=0;j<z;j++)
        //         {
        //             v.push_back(v[i]/x);
        //         }
        //         n+=x;
        //     }
        //     else if((v[i]%x)!=0)
        //     break;

        // }
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            y = v[i];
            sum += y;

            while (y % x == 0)
            {

                sum += (y/ x) * z;
                y = y / x;
            }

            if (y % x != 0)
                break;
        }

        cout << sum << endl;
    }
}
