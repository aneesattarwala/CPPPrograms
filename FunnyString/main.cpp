#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void funny (string s)

int main() {
    int n;
    string s[10];
    cin>>n;
    for (int i=0;i<n;++i)
	{
		cin>>s[i];
		funny(s[i]);
	}
	
	
	
	return 0;
}