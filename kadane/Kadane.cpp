#include <iostream>
#include <vector>
#include<numeric>
#include <iomanip>
using namespace std;
int main () {
	//int arr[10]={0,2,-5,3,-4,40,22,6,-3,10000};
	int arr[6]={2,-1,2,3,4,-5};

	for (int i=0;i<6;++i)
	{cout<<arr[i]<<" ";}
	int sum=0,maxsum=0;
	vector<int> subarray;
	for (int i=0;i<6;++i)
	{
		if (sum+arr[i]>0)
		{
			subarray.push_back(arr[i]);
			sum+=arr[i];
			if (sum>=maxsum)
			{
				maxsum=sum;
			}

		}
		else if(sum+arr[i]<=0)
		{	sum=0;
			subarray.clear();
			
	
		}
	}
	cout<<endl;
	cout<<maxsum<<" "<<sum<<" "<<endl;
	if (maxsum>sum)
	{
		while (maxsum!=sum){
			subarray.pop_back();
			sum=accumulate(subarray.begin(),subarray.end(),0);
			
		}
	}
	vector<int>::iterator it;
	for (it=subarray.begin();it!=subarray.end();++it)
		{   
			
			cout<<*it<<" ";
		}

	
	
	
}


