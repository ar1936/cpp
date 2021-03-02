#define ll long long
#define mod 1000000007
class Solution{

public:
int perfectSum(int arr[], int n, int sum)
{
ll t[n+1][sum+1];
for(int i=0;i<=n;i++){
t[i][0]=1;
}
for(int j=1;j<=sum;j++){
t[0][j]=0;
}
for(int i=1;i<=n;i++){
for(int j=1;j<=sum;j++){
if(arr[i-1]<=j){
t[i][j]=t[i-1][j-arr[i-1]]%mod+t[i-1][j]%mod;
}
else{
t[i][j]=t[i-1][j]%mod;
}
}
}
return (t[n][sum])%mod;
}

};

