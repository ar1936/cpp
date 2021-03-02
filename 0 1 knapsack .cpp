#include <bits/stdc++.h>
using namespace std;


int knapsack_using_recursion(int v[],int w[],int size,int weight)
{
    int vvr=0,vvl=0;
    if(size==0||weight==0)
    return 0;
    if(weight<w[size-1])
    vvl= knapsack_using_recursion(v,w,size-1,weight);
    else if (weight>w[size-1])
    vvr= max(knapsack_using_recursion(v,w,size-1,weight-w[size-1])+v[size-1],knapsack_using_recursion(v,w,size-1,weight));

   return max(vvr,vvl);

}



int knapsack_using_memoization(int v[],int w[],int size,int weight)
{
    int t[size+1][weight+1];
    memset(t,-1,sizeof(t));
    if(t[size][weight]!=-1)
    return t[size][weight];
    int vvr=0,vvl=0;
    if(size==0||weight==0)
    return 0;
    if(weight<w[size-1])
    {
        t[size][weight]=knapsack_using_memoization(v,w,size-1,weight);
        
    }
    else if (weight>w[size-1])
    {
        t[size][weight]=max(knapsack_using_memoization(v,w,size-1,weight-w[size-1])+v[size-1],knapsack_using_memoization(v,w,size-1,weight));
        

    }

    return t[size][weight];
    

}




int knapsack_using_tabulation(int v[],int w[],int size,int weight)
{
    int t[size+1][weight+1];
    for(int i=0;i<size+1;i++)
    {
        for(int j=0;j<weight+1;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<size+1;i++)
    {
        for(int j=1;j<weight+1;j++)
        {
            if(j<w[i-1])
            t[i][j]=t[i-1][j];
            else 
            t[i][j]=max(v[i-1]+t[i-1][j-w[i-1]],t[i-1][j]);
        }

    }
    return t[size][weight];
}



int main()
{
    int size,weight;
    cin>>size>>weight;
    int v[size],w[size];
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<size;i++)
    {
        cin>>w[i];
    }




    cout<<knapsack_using_recursion(v,w,size,weight);



     cout<<knapsack_using_memoization(v,w,size,weight);



    cout<<knapsack_using_tabulation(v,w,size,weight);

    return 0;
}


