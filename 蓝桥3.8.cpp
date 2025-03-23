#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  char A[5000];
  int i=0;
  for(;i<n;i++)  cin >> A[i];
  A[i]='\0';
  for(int i=0;i<n;i++){
    int ans=0;
    if(i=='0'){
      int lp=i;
      int rp=i;
      for(;lp>=0&&A[lp]=='1';lp--);
      for(;rp<=n-1&&A[rp]=='1';rp++);
      ans=(lp-i>rp-i)?rp-i:lp-i;
      cout <<ans<<" ";
    }
  }
  return 0;
}
