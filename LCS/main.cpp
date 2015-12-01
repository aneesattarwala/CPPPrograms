#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int lcs_size (int A[],int B[], int a, int b)
{
    
    if (a==0 || b==0)
	{
        return 0;
    }    
    if (a>0 && b>0){
        if (A[a-1]==B[b-1]){
			cout<<"outer "<<A[a-1]<<" "<<B[b-1]<<" ";
            return (1+lcs_size(A,B,a-1,b-1));
		}
		else{
			cout<<"inner ";
			return( max(lcs_size(A,B,a-1,b),lcs_size(A,B,a,b-1)));
			   
        }
	}
	return 0;
}


int main() {
    int n,m;
    int i=0;
    int j=0;
    int A[1000];
    int B[1000];
	
    vector<int> LCS1;
    cin>>n>>m;
    for (int i=0;i<n;++i){
        cin>>A[i];
    }
    for (int i=0;i<m;++i){
        cin>>B[i];
    }
	
	cout<<lcs_size(A,B,n,m);  
	//vector<int>::reverse_iterator it;
	//for (it=LCS1.rbegin();it!=LCS1.rend();++it)
	//{
	//  cout<<*it<<" ";
	//}    
	//return 0;
}
