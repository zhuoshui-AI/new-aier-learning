#include<iostream>
#include<string>
#include<cctype>
using namespace std;
struct phototxt{
  string s1;
  string s2;
};
bool flag = false;

int main ()
{
  int n,l,p;
  cout << "����������"<< endl; 
  cin >> n;
  struct phototxt A[n];
  cout << "��������˵����ֺ͵绰"<<endl;
  for(int i = 0;i < n;i++){
    cin >> A[i].s1 >> A[i].s2;
  }
  string s; 
  while(1){
  	cout << "�����ѯ"<<endl; 
    cin >> s;
    if(isdigit(s[0])){
      for(int i = 0;i<n;i++){
        p = 0,l = 0;
        flag = false;
//        while(p != s.size()){
//          if(s[p++] != A[i].s2[l++]){
//            break;
//          }
//        }
		while( p != s.size()){
			if(s[p++] != A[i].s2[l++]){
			flag = true;
            break;
          }
		}
		if(flag == false)  cout <<A[i].s1<<' '<<A[i].s2<<endl;
//        if(s == A[i].s2)  cout <<A[i].s1<<' '<<A[i].s2<<endl;
      }
    }
    else{
      for(int i = 0;i<n;i++){
        p = 0,l = 0;
//        while(p != s.size()){
//          if(s[p++] != A[i].s1[l++]){
//            break;
//          }
//        }
        if(s == A[i].s1)  cout <<A[i].s1<<' '<<A[i].s2<<endl;
    }
  }
}
return 0;
}
