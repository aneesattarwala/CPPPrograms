#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void lcs_size (int A[],int B[], int a, int b)
{
	int i,j;
	int Len[a+1][b+1];
    for ( i=0; i<=a; ++i){
		for (j=0 ;j<=b; ++j){
	if (i==0 || j==0)
	{
		
	Len[i][j]=0;
	} 
	
	else if (A[i-1]==B[j-1]){
		Len[i][j]=1+Len[i-1][j-1];
	}
	else
	{	
		Len[i][j] = max(Len[i][j-1],Len[i-1][j]);
		
	}
		}
	}		
	// Following code is used to print LCS
	int index = Len[a][b];
	// Create a int array to store the lcs string
	int lcs[index];
	i = a;
	j = b;
	while (i > 0 && j > 0)
	{
		// If current value in X[] and Y are same, then
		// current value is part of LCS
		if (A[i-1] == B[j-1])
		{
			lcs[index-1] = A[i-1]; // Put current number in result
			i--; j--; index--;     // reduce values of i, j and index
		}
		
		// If not same, then find the larger of two and
		// go in the direction of larger value
		else if (Len[i-1][j] > Len[i][j-1])
			i--;
		else
			j--;
	}
	
	for (int k=0;k<Len[a][b];k++)
	{
		cout<<lcs[k]<<" ";
	
}

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
    lcs_size(A, B, n, m);
	return 0;
}
