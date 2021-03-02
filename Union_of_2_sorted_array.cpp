#include <bits/stdc++.h>
using namespace std;
void Naive_print_Union(int a[], int b[], int m, int n){
    
    int c[m+n];
    for(int i=0;i<m;i++)
        c[i]=a[i];
    for(int i=0;i<n;i++)
        c[i+m]=b[i];
    sort(c,c+m+n);
    
    for(int i=0;i<m+n;i++){
        if(i==0||c[i]!=c[i-1])
            cout<<c[i]<<" ";
    }
}

void optimum_print_Union(int a[], int b[], int m, int n){
    
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){i++;continue;}
        if(j>0 && b[j-1]==b[j]){j++;continue;}
        if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
        else if(a[i]>b[j]){cout<<b[j]<<" ";j++;}
        else{cout<<a[i]<<" ";i++;j++;}
    }
        while(i<m){if(i==0||a[i]!=a[i-1])cout<<a[i]<<" ";i++;}
        while(j<n){if(j==0||b[j]!=b[j-1])cout<<b[j]<<" ";j++;}
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
    Naive_print_Union(arr,brr,n,m);     // T.C= O((m+n)*log(m+n)) and S.C = O(m+n); // valid for unsorted array also

    optimum_print_Union(arr,brr,n,m); // T.C= O(m+n) and S.C = O(1); / only valid for unsorted array

}