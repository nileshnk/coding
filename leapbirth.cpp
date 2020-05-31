#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int test,input, output, temp,temp2;
  
  
  do{
  
  cout<<"Enter the number of test cases[0-10]: ";
  cin>>test;
  
  while((test>=1&&test<=10))
  {
  
		int arr[test];
  		cout<<endl<<"Enter the birth years: "<<endl;
  
  	for(int i=0; i<test; i++)
  	{
  	
  		do {
	  
  			cin>>temp;
  			if(temp>=1&&temp<=2500)
  			arr[i]=temp;
  			else cout<<"Enter the number between 1 and 2500: ";
  		  
		}
  		  
  	  while(!(temp>=1&&temp<=2500));
  
	}

	for(int i=0; i<test; i++)
  	{
  	
  		if ((arr[i]%4==0))
		 {
			if((arr[i]%100==0))
			{		
				if ((arr[i]%100==0)&&(arr[i]%400==0))
				cout<<"Yes"<<endl;
			
				else cout<<"No"<<endl;
			}
			
		else cout<<"Yes"<<endl;
	
		}
	
			else cout<<"No"<<endl;
  	
  	/*if(!arr[i]%4)
  	if(!(arr[i]%100&&arr[i]%400))
  	
		cout<<"Yes";
  	
	  else cout<<"No";
  	else cout<<"No";
  	cout<<endl;
  	*/
  }	
	
/*	cout<<"Display of years: ";
  for(int i=0; i<test; i++)
  {
  	cout<<arr[i];
  	cout<<endl;
  }
*/
  }
  
} 
 while(test>=1&&test<=10) ;
   
  
  return 0;
}
