#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define ppb pop_back
#define mpll map<ll, ll>
#define vll vector<ll>
#define str string
#define si size()

#define be begin()
#define en end()
#define vs vector<string>
#define vc vector<char>
#define sll set<ll>
#define pi 3.14159265358979323846264338327
#define nope string::npos
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
    fast();

    ll n;
    cin>>n;

                                                                //  INVERTED PATTERN

    // question :- 1;
    // input:- 
    //         n =5;
    // output:-  
    //         1 2 3 4 5
    //         1 2 3 4
    //         1 2 3
    //         1 2 
    //         1


    // question :- 2;
    // input:- 
    //         n =6;
    // output:-  
    //         1 2 3 4 5 6
    //         1 2 3 4 5
    //         1 2 3 4
    //         1 2 3
    //         1 2
    //         1


    

    // question :- 3;
    // input:- 
    //         n =7;
    // output:-  
    //         1 2 3 4 5 6 7 
    //         1 2 3 4 5 6 
    //         1 2 3 4 5 
    //         1 2 3 4 
    //         1 2 3 
    //         1 2 
    //         1
                


    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=1;j<=n-i;j++)
    //     cout<<j<<" ";
    //     cout<<endl;
    // }






                                                                    // 0,1 pattern


    // question :- 1;
    // input:- 
    //         n =5;
    // output:-  
                // 1
                // 0 1
                // 1 0 1
                // 0 1 0 1
                // 1 0 1 0 1



    // question :- 2;
    // input:- 
    //         n =6;
    // output:-  
                // 1 
                // 0 1 
                // 1 0 1 
                // 0 1 0 1 
                // 1 0 1 0 1 
                // 0 1 0 1 0 1

    

    // question :- 3;
    // input:- 
    //         n =7;
    // output:-  
                // 1 
                // 0 1 
                // 1 0 1 
                // 0 1 0 1 
                // 1 0 1 0 1 
                // 0 1 0 1 0 1 
                // 1 0 1 0 1 0 1          



/* 
i= 1 to 5, but 
if i=1; j=1
if i=2; j=2,1;
if i=3; j=3,2,1;
if i=4; j=4,3,2,1;
if i=5; j=5,4,3,2,1;


after that we print 0 if j is even OR we print 1 if j is odd; 

*/




    // for(ll i=1;i<=n;i++)
    // {
    //     for(ll j=i;j>0;j--)
    //     {
    //         cout<<((j%2==0)?"0 ":"1 ");
    //     }
    //     cout<<endl;
    // }

                                                                    // RHOMBUS PATTERN
    
        // question :- 1;
    // input:- 
    //         n =5;
    // output:-  
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *    


    // question :- 2;
    // input:- 
    //         n =6;
    // output:-  
                
//       * * * * * * * 
//      * * * * * * * 
//     * * * * * * * 
//    * * * * * * * 
//   * * * * * * * 
//  * * * * * * * 

    

    // question :- 3;
    // input:- 
    //         n =7;
    // output:-  
//       * * * * * * * 
//      * * * * * * * 
//     * * * * * * * 
//    * * * * * * * 
//   * * * * * * * 
//  * * * * * * * 
// * * * * * * *


    /*
    i start from 1 to 5 and also j start from 1 to 5 but there is some differece in spacing;
    if  i=1, spacing = 4;
    if  i=2, spacing = 3;
    if  i=3, spacing = 2;
    if  i=4, spacing = 1;
    if  i=5, spacing = 0;
    so we can say spacing = n-i;
    
    */

  
//    for(ll i=1;i<=n;i++)
//    {
//        ll spacing=n-i;
//        while(spacing--)
//        cout<<" ";
//        for(ll j=1;j<=n;j++)
//        {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }

                                                            //NUMBER PATTERN

/*
    if i=1,j=1,left_spacing=4;
    if i=2,j=2,left_spacing=3;
    if i=3,j=3,left_spacing=2;
    if i=4,j=4,left_spacing=1;
    if i=5,j=5,left_spacing=0;
    
    so, we can say left side spacing = n-i;
*/




// question :- 1;
// input:- 
//         n =5;
// output:-  
//     1
//    1 2 
//   1 2 3 
//  1 2 3 4
// 1 2 3 4 5


    // question :- 2;
    // input:- 
    //         n =6;
    // output:-  
                

//      1 
//     1 2 
//    1 2 3 
//   1 2 3 4 
//  1 2 3 4 5 
// 1 2 3 4 5 6
    

    // question :- 3;
    // input:- 
    //         n =7;
    // output:-  

//       1 
//      1 2 
//     1 2 3 
//    1 2 3 4 
//   1 2 3 4 5 
//  1 2 3 4 5 6 
// 1 2 3 4 5 6 7

    // for(ll i=1;i<=n;i++)
    // {
    //     ll left_spaceing=n-i;
    //     while(left_spaceing--)
    //     cout<<" ";
    //     for(ll j=1;j<=i;j++)
    //     {
    //         cout<<j<<" ";

    //     }
    //     cout<<endl;
    // }
    
                                            
                                            
                                            
                                            
                                            
                                                            //PALINDROMIC PATTERN



// question :- 1;
// input:- 
//         n =5;
// output:-  
//             1            
//           2 1 2 
//         3 2 1 2 3 
//       4 3 2 1 2 3 4 
//     5 4 3 2 1 2 3 4 5 


    // question :- 2;
    // input:- 
    //         n =6;
    // output:-  
                

//             1            
//           2 1 2 
//         3 2 1 2 3 
//       4 3 2 1 2 3 4 
//     5 4 3 2 1 2 3 4 5 
//   6 5 4 3 2 1 2 3 4 5 6 

    

    // question :- 3;
    // input:- 
    //         n =7;
    // output:-  
//             1            
//           2 1 2 
//         3 2 1 2 3 
//       4 3 2 1 2 3 4 
//     5 4 3 2 1 2 3 4 5 
//   6 5 4 3 2 1 2 3 4 5 6 
// 7 6 5 4 3 2 1 2 3 4 5 6 7




    /*
    if i=1, j=1, left spacing =8;
    if i=2, j=2 1 2 , left spacing =6;
    if i=1, j=3 2 1 2 3, left spacing =4;
    if i=1, j=4 3 2 1 2 3 4, left spacing =2;
    if i=1, j=5 4 3 2 1 2 3 4 5, left spacing =0;
    
    so from above conclusion say that when i = 1 to n ;
    then j = n to 1 then again 1 to n;
    and left side spacing = 2*(n-i); 
    */



//    for(ll i=1;i<=n;i++)
//    {
//        ll spacing=2*(n-i);
//        while(spacing--)
//        {
//            cout<<" ";
//        }
//        for(ll  j=i;j>0;j--)
//        cout<<j<<" ";
//        for(ll j=2;j<=i;j++)
//        cout<<j<<" ";
//        cout<<endl;
//    }



    //solve()
    return 0;
}