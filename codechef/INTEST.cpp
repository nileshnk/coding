#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long int n,k;
	cin>>n;
	do{
		cin>>k;
	}
	while(!(k<=(10000000)));
	
	int arr[n],count=0;
	
	for(int i=0;i<n;i++)
	{
		label:
		cin>>arr[i];
		
		if (arr[i]<1000000000)
		{
			if (arr[i]%k==0)
			{
				++count;
				}
			}
			else {
				cout<<"Please enter number < 10^9"<<endl;
				goto label; 
				}
	}
	
	cout<<count;
		
	
	return 0;
}

