#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector <int>  lcs_size (int A[],int B[], int a, int b)
{
	vector <int> L;
    if (a==0 ||  b==0)
	{
		
		return vector <int> (0);
	} 
	
	if (A[a-1]==B[b-1]){
		L = lcs_size(A,B,a-1,b-1); 
		L.push_back(A[a-1]);
		return (L);
	}
	else
	{	
		if (lcs_size(A,B,a,b-1).size()>lcs_size(A,B,a-1,b).size())
			L=lcs_size(A,B,a,b-1);
			
		else 
			L=lcs_size(A,B,a-1,b);
			
	}
	return L;
}



int main() {
    int n,m;
    int A[1000];
    int B[1000];
	vector < vector<int> >:: iterator iter;
    vector <int>  LCS1;
    cin>>n>>m;
    for (int i=0;i<n;++i){
        cin>>A[i];
    }
    for (int i=0;i<m;++i){
        cin>>B[i];
    }
	LCS1= lcs_size(A, B, n, m);
	vector<int>::iterator it;
	for (it=LCS1.begin();it!=LCS1.end();++it)
	{
	  cout<<*it<<" ";
	}  
	
	return 0;
}
