
#include<vector>
#include<string>
#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
void reverse (string& str)
{
	char temp;
	int n= (str).length();
	cout<<str[1];
	for (int i=0;i<n/2;++i){
		temp = str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
		//	cout<<temp<<" ";
	}	
}
int main () {
	string s;
	string *str1;
	cout<<"Enter string :";
	cin>>s;
	str1=&s;
	reverse(*str1);
	cout <<"Reversed : "<<s;		
    return 0;
}
