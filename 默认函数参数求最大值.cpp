#include <iostream>
using namespace std;

int mymax(int a,int b,int c = 0)
{
    if(c > a)  a = c;
    if(b > a)  a = b;
    return a;
}

int main()
{
    int mode,a,b,c;
    cout <<"输入模式——2 表示输入两个数字，3 表示输入3个数字"<<'\n';
    cin >> mode;
    if(mode == 2)  {
        cin >> b >> c;
        cout << mymax(b,c);
    }
    else{
        cin >> a >> b >>c;
        cout << mymax(a,b,c);
    }
    return 0;
}
