#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    string name;
    int age;
    bool gender;
};
int main()
{
    class student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].name>>a[i].age>>a[i].gender;
    }
    for(int i=0;i<3;i++)
    {
       cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].gender<<endl; 
    }
}