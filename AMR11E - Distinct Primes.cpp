#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int t, n, arr[2700], i, j, arr2[2700];
	memset(arr, 0, sizeof(arr));

	for(i = 2 ; i < 2700 ; i++)
	{
		if(arr[i] == 0)
		{
			for(j = 2*i ; j < 2700 ; j += i)
				arr[j]++;
		}
	}
	
	for(i = 30, j = 0 ; i < 2700 ; i++)
	{
		if(arr[i] >= 3)
			arr2[j++] = i;
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<arr2[n - 1]<<endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}