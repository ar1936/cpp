

// C++ recursive function to 
// solve tower of hanoi puzzle 
#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod,int &count) 
{ 
    if (n == 1) 
    { 
    	// count++;
        // cout << "Move disk 1 from rod " << from_rod << 
        //                     " to rod " << to_rod<<endl; 
        return; 

    } 
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod,count); 
    // cout << "Move disk " << n << " from rod " << from_rod <<
    //                             " to rod " << to_rod << endl; 
    count++;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod,count);
    count++;

} 
 
// Driver code
int main() 
{ 
    int n = 5; // Number of disks 
    cin>>n;
    int count =1;
    towerOfHanoi(n, 'A', 'C', 'B',count); // A, B and C are names of rods 
	cout<<count;
    return 0; 
} 
 