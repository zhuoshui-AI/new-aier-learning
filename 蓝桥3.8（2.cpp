#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int temp=0;
  int ans=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='a')   temp++;
    else{
      ans=max(ans,temp);
      temp=0;
    }    
  }
  for(int i=0;i<ans+1;i++)  cout << 'a';
  return 0;
}
