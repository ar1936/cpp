#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool array(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

bool automaton(string a, string b)
{
    int n = 0;
    for (int i = 0; i < a.length() and n < b.length(); i++) n += a[i] == b[n];
    return n == b.length();
}

bool both(string a, string b)
{
    for (int i = 0; i < b.length(); i++)
    {
        int p = a.find(b[i]);
        if (p == -1) return false;
        a[p] = '0';
    }
    return true;
}

int main()
{
    string a, b;
    cin >> a >> b;
    if (array(a, b)) cout << "array" << endl;
    else if (automaton(a, b)) cout << "automaton" << endl;
    else if (both(a, b)) cout << "both" << endl;
    else cout << "need tree" << endl;
    return 0;
}

// #include <bits/stdc++.h>
// #include <iomanip>
// using namespace std;
// typedef long long ll;
// typedef double db;
// typedef char ch;
// #define pb push_back
// #define ppb pop_back
// #define mpll map<ll, ll>
// #define mpch map<ch, ll>
// #define vll vector<ll>
// #define str string
// #define si size()
// typedef char ch;
// #define be begin()
// #define en end()
// #define vs vector<string>
// #define vc vector<char>
// #define sll set<ll>
// #define loop(i,n) for(int i = 0; i < n; ++i)
// #define pi 3.14159265358979323846264338327
// #define nope string::npos
// void fast(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// }
// bool automaton(str s, str t)
// {
//     loop(i,s.si)
//     {
//         for(ll j=i+1;j<s.si;j++)
//         {
//             if(s.substr(i,j)==t)
//             return true;
//         }
//     }
//     return false;
// }
// bool arr(str s,str t)
// {
//     mpch ms,mt;
//     loop(i,s.si)
//    {
//         ms[s[i]]++;
//         mt[t[i]]++;
//    }
//    loop(i,s.si)
//    {
//        if(ms[s[i]]!=mt[s[i]])
//        return false; 
//    }
//    return true;

// }
// bool both(str s,str t)
// {
//      mpch ms,mt;
//     loop(i,s.si)
//    {
//         ms[s[i]]++;
//    }
//    loop(i,t.si)
//    mt[t[i]]++;
//    loop(i,t.si)
//    {
//        if(mt[t[i]]>ms[t[i]])
//        return false;
//    }
//    return true;
// }
// int main()
// {
//     fast();
//     str s,t;
//     cin>>s>>t;
//     if(automaton(s,t))
//     cout<<"automaton";
//      else if (arr(s,t))
//      cout<<"array";
//     else if (both(s,t))
//     cout<<"both";
//     else 
//     cout<<"need tree";
    
//     return 0;
// }