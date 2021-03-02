// #include <bits/stdc++.h>
// #include <iomanip>
// using namespace std;
// typedef long long ll;
// typedef double db;
// #define pb push_back
// #define ppb pop_back
// #define mpll map<ll, ll>
// #define vll vector<ll>
// #define str string
// #define si size()
// #define vs vector<string>
// #define vc vector<char>
// #define sll set<ll>
// #define pi 3.14159265358979323846264338327
// #define nope string::npos
// void fast(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// }

// int main()
// {
//     fast();
//     ll m=1;
//     str s;
//     cin>>s;
//     for(int i=0;i<s.si;i++)
//     {
//         if(s.substr(i,3)=="WUB")
//         {
//             i=i+2;
//             if(m==0)
//            { cout<<" ";
           
//            }
//             continue;
//         }
//         else
//            {
//                cout<<s[i];
//                 m=0;
//            }
//     }

//     //solve()
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[205],str[205];
    int i,l,j=0;
    cin>>s;
    l=strlen(s);
    for(i=0;;){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            str[j]=' ';
            j++;
            i+=3;
        }
        else{
            str[j]=s[i];
            i++;
            j++;
        }
        if(str[j-2]==' '&&str[j-1]==' '){
          j--;
        }
        if(i>l)
            break;
    }
    if(str[0]==' '){
            for(i=1;i<=strlen(str);i++){
        str[i-1]=str[i];
    }
    }

    printf("%s\n",str);
    return 0;
}
