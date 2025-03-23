#include<iostream>
using namespace std;

void printelem(int &a,int &b)
{
    if(a > b)  cout << a << b;
    else  cout << b <<' ' << a;
}
int main ()
{
    int a,b;
    cin >> a >> b;
    printelem(a,b);
    return 0;
}
