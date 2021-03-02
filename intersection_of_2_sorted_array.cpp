#include <bits/stdc++.h>
using namespace std;

void efficient_solve(int arr[],int brr[],int n,int m )
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(i>0&&arr[i]==arr[i-1])
        continue;
        if(arr[i]>brr[j])
        {
            j++;
        }
        else if(arr[i]<brr[j])
        {
            i++;
        }
        else if(arr[i]==brr[j])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
    }
}
void Naive_solve(int arr[],int brr[],int n,int m)
{
        // if(n==1)
        // {
        //     cout<<arr[0]<<" ";
        // }
        // if(m==1)
        // {
        //     cout<<brr[0]<<" ";
        // }



        for(int i=0;i<n;i++)
        {
            if(i>0&&(arr[i]==arr[i-1]))
                continue;
            for(int j=0;j<m;j++)
                if(arr[i]==brr[j])
                {
                    cout<<arr[i]<<" ";
                    break;
                }
                
            
        }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    

    Naive_solve(arr,brr,n,m); // T.C = O(n*m) and S.C = O(1) OR if we need to print using  function  then S.C will be O(number of intersection element);


    efficient_solve(arr,brr,n,m); // T.C = O(n) and  S.C =O(1); this method is usefull only for sorted array;



    return 0;
}