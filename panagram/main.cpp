#include <iostream>
using namespace std;
int main () {
	string s;
	//int flag[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int flag[26];
	for (int i=0;i<26;++i)
	{flag[i]=0;}
	int flag2=0;
	getline(cin,s);
	int l=s.length();
	char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for (int i=0;i<26;++i){
	 
		for (int j=0;j<l;++j){
		
 if (tolower(s[j])==alpha[i])
		
				flag[i]++;}
	}

	for (int k=0;k<26;++k)
	{if (flag[k]==0){
		flag2=1;
		cout<<"not pangram";
		break;
	}
}
	
	if(flag2==0){
	   cout<<"pangram";
	}
}
