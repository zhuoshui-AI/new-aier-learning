#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string s1,s2;
	cout << "����Դ�ַ���"<<endl;
	cin >> s1;
	cout << "�������ַ���"<< endl;
	cin >> s2;
	cout <<s2.size();
	int cont = 0,c = 0;
	int tempcont = 0;
	for(int i = 0;i<s1.size();){
		tempcont = 0;
		int a = i,c = 0;  
		while(s1[a] == s2[c]&&tempcont < s2.size()){
			a++;
			c++;
			tempcont++;
//			cout << tempcont <<endl; 
		}
		if(tempcont == s2.size())  cont++;
		i++;
	} 
	cout << s2 <<"��Դ�ַ����г��ִ���" << cont <<endl; 
 } 
