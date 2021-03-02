#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    string str2;
    cin>>str>>str2;
    
    int N=str.size();
    int k=str2.size();
    int res=0, count=0;

    for(int y=0;y<k;y++)
    {
        count=count+str2[y]; // add ASCII value of character from str2.
       
    }
    //cout<<"Words count in short string= "<<count<<endl;
    int i=0,j;
    for(j=0;j<k;j++)
    {
        count=count-str[j];
    }
    //cout<<"Words when hit window in long string= "<<count<<endl;
    
    if(count==0)
    res++;
    
    for(;j<N;i++,j++)
    {
        count=count+str[j];
        count=count-str[i];
        
        if(count==0)
        res++;
        
    }
    cout<<endl<<res;
    return 0;
}