#include <iostream>
using namespace std;


int main(){
	
	int num, n, result;
	
	cout<<"Enter the number";
	cin>>num;
	
	if ((num%4==0))
	{
		if((num%100==0))
		{
		
			if ((num%100==0)&&(num%400==0))
			cout<<"Yes";
			
			else cout<<"No";
		
		}
		else cout<<"Yes";
	
	}
	else cout<<"No";
	
}
