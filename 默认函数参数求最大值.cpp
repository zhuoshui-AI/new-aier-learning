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
    cout <<"����ģʽ����2 ��ʾ�����������֣�3 ��ʾ����3������"<<'\n';
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
