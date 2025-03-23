#include <iostream>
#include<string>
//#include<cstrting>
using namespace std;
const int M = 1e4 + 3;
int main()
{
    //  string des="lan";
    string s0;
    string s;
    cin >> s0;
    int L[M] = { 0 }, A[M] = { 0 }, N[M] = { 0 };
    int maxl = 0, maxa = 0, maxn = 0;
    for (int i = 0; i < s0.size(); i++) {
        if (s0[i] == 'l' || s0[i] == 'a' || s0[i] == 'n')  s += s0[i];
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'n') { maxn++; }
        if (s[i] == 'a'&&maxa < maxn) { maxa++; }
        if (s[i] == 'l'&&maxa < maxn&&maxl < maxn&&maxl < maxa) { maxl++; }
        L[i] = maxl;
        A[i] = maxa;
        N[i] = maxn;
    }
  int cont = 0;
	cont = L[0] * A[0] * N[0];

  cout << cont << endl;
  return 0;
}
