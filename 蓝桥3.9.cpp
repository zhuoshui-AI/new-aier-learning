#include <bits/stdc++.h>
#define ll long long
// #define inty int
using namespace std;
const int mod=1e9+7;
const int M=1e3+7;
bool ok[M][M];
ll Quick(ll a,ll b)
{
  ll ans=1;
  while(b){
    if(b&1)  ans=a*ans%8;
    a=a*a%8;
    b>>=1;
  }
  return ans; 
}
int main(void)
{
  ll t;
  cin>> t;
  ll A[M][M],dp[M][M];
  ll maxl=1e18+3;
  ll minl=0;
  for(ll i=0;i<t;i++){
    cin>> A[i][0]>>A[i][1];
    maxl=max(maxl,A[i][1]);
    minl=min(minl,A[i][0]);
  }

  // for(int i=0;i<t;i++){
    for(ll i=minl;i<maxl;i++){
      for(ll j=i+1;j<maxl;j++)  {
       dp[i][j]=Quick(i,j);
       dp[j][i]=Quick(j,i);
       if(dp[i][j]==dp[j][i])  ok[i][j]=true;
     }
    }
  // }
  ll ans=0;
  for(ll p=0;p<t;p++){
    ans=0;
    for(long long i=A[i][0];i<A[i][1];i++){
      for(ll j=i;j<A[i][1];j++)  {
       if(ok[i][j]==true) ans++;
     }
    }
    cout<< ans<<'\n';
  }
  return 0;
}
