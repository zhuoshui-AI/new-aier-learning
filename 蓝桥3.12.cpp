#include <bits/stdc++.h>
using namespace std;
const int M=1e5+3;
int main ()
{
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  int a = 0,b = 0;
  int A[M],B[M];
  for(int i=0;i<n;i++){
    if(s[i]=='a')  a++;
    else if(s[i]== 'b')  b++;
  }

  int x=a,y=b;
  for(int i=0;i < n;i++){
    if(s[i] == 'a')  A[i] = x-- ;
    if(s[i] == 'b')  B[i] = y--;
  }
  int ans=0;
  for(int i=0;i<n;i++){
    if(s[i] == 'a') ans += B[i]+b;
    if(s[i] == 'b')  ans += A[i] + a;
  }
  cout << ans;
  return 0;
}
