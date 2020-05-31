#include <iostream>

using namespace std;

int main()
{
	int T, A, B,num;

	cin>>T;
	num=T*2;
	int arr[num];
	
	for (int i=0; i<num; i=i+2)
	{
		cin>>arr[i];
		cin>>arr[i+1];
		
		}
		
	for (int i=0; i<num; i=i+2)
	{
		cout<<arr[i]+arr[i+1];
		cout<<endl;
	}

	
}


/*

// bits/stdc++.h works in linux. 
// It loads most of the libraries of C++ required.
#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}

*/
