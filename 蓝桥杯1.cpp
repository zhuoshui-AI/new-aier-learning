#include <iostream>
using namespace std;

int func(int a,int b,int c)
{
//  int cnt=0;
  if(a<b){
    int t=a;
    a=b;
    b=t;
  }
  if(a&&b){
    func(b,a-b,++c);
//    cnt++;
  }
  else  return c;
}
int main()
{
  int t;
  cin >> t;
  int c,d,f;
  while(t){
    cin >> c>> d;
    f=func(d,c,0);
    cout << f <<'\n';
  }
  return 0;
}
