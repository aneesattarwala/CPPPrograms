
#include<vector>
#include<string>
#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

int Binsearch(int A[],int n,int v)
{
    int beg=0,end=n,mid;
	while(beg<=end){
		mid = (end+beg)/2;
		if (v==A[mid])
			return mid;
		else if (v>A[mid])
			beg=mid+1;
		else
			end=mid-1;
	}
	return -1;
}	
int BSRec(int A[],int beg, int end,int v)
{
	int mid;
	while(beg<=end){
		mid = (end+beg)/2;
		if (v==A[mid])
			return mid;
		else if (v<A[mid])
			return BSRec(A,beg,mid-1,v);
		else
			return BSRec(A,mid+1,end,v);
	}
	return -1;
}	

int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int v;
	cout<<"enter value to search :"<<endl;
	cin>>v;
	if(Binsearch(a,10,v)!=-1)
		cout<<"Value found at :"<<BSRec(a,0,10,v);
	else 
		cout<<"Value not found";
}


