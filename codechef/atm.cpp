#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	double y, temp2;
		
	cout<<"Enter the withdrawl amount: "<<endl;
	cin>>x;
	
	cout <<endl<<"Enter the Available Balance:  ";
	cin>>y;
	
	if (y>=(x+0.50))
	{
		if((x%5==0))
		{
			temp2=y-(x+0.50);
			cout<<setprecision(2)<<fixed<<temp2;
		}
		else cout<<setprecision(2)<<fixed<<y;
		
	}
	
	else cout<<setprecision(2)<<fixed<<y;
	
	return 0;
	
}
