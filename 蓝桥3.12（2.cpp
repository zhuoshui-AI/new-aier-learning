#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n=0;
    string s;
    cin >> s;
    for(unsigned int i=0;i<s.size();i++){
      // cout << (i&1)<<endl;
        if(i&1 == 0) {
        if(s[i] == 'z') s[i] ='y';
        else  s[i] = 'z';
        }
        else {
            if(s[i] == 'a')  s[i] ='b';
            else s[i] ='a';
        }
    }
    cout << s;
    return 0;
}
