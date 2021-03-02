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
// #define ppi pair<int,pair<int,int>
// #define minh  priority_queue <int, vector<int>, greater<int> >
// #define min_pair  priority_queue <ppi, vector<ppi>, greater<ppi> >
// #define maxh  priority_queue <int>
// #define max_pair  priority_queue <ppi>
// #define sll set<ll>
// #define loop(i,n) for(int i = 0; i < n; ++i)
// #define pi 3.14159265358979323846264338327
// #define nope string::npos
// #define max2(a,b) ((a<b)?b:a)
// #define max3(a,b,c) max2(max2(a,b),c)
// #define min2(a,b) ((a>b)?b:a)
// #define min3(a,b,c) min2(min2(a,b),c)
// void fast(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// }
// void insert_in_stack(stack<int>&s,int temp)
// {
//     s.push(temp);
// }
// void reverse_a_stack(stack<int>&s,int temp)
// {
//     if(s.size()==0)
//     {
//         s.push(temp);
//     }

//     int val=s.top();
//     s.pop();
//     reverse_a_stack(s,val);
//     //insert_in_stack(s,temp);
// }
// int main()
// {
//     fast();
//     ll n;
//     cin>>n;
//     stack<int>s;
//     for(int i=0;i<n;i++)
//     {
//         ll x;
//         cin>>x;
//         s.push(x);
//     }
//     int temp=s.top();
//     s.pop();
//     reverse_a_stack(s,temp);
//     for(int i=0;i<s.si;i++)
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }


//     //solve()
//     return 0;
// }




// Atharva Kulkarni
// Atharva Kulkarni
// 3 weeks ago

#include<bits/stdc++.h> 
using namespace std; 
  

  
// intializing a string to store 
// result of reversed stack 
string ns; 
  

void insert(stack<int>&st,int temp){
    //insert temp at the bottom
    if(st.size()==0){
        st.push(temp);
        return;
    }
    //Hypothesis
  int val  = st.top();
  st.pop();
  insert(st,temp);
  //Induction 
  st.push(val);

}



void reverse(stack<int>&st){
    //base condition
    if( st.size()==1){
        return;
    }

    //Hypothesis
    int temp = st.top();
    st.pop();
    reverse(st);

    //Induction
    insert(st,temp);

}


int main(){
    int n;
    cin>>n;
    stack<int> st; 
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
     // push elements into  
    // the stack 
    
    reverse(st);
    while(!(st.empty())){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;



// void solve(stack<int>&s)
// {
//     int val=s.top();
//     if(s.size()==0)
//     {
//         s.push(val);
//         return ;
//     }
    
//     s.pop();
//     solve(s);
//     s.push(val);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     stack<int>s;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         s.push(x);
//     }
//     solve(s);
//     for(int i=0;i<n;i++)
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }