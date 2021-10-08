#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int k;
	cin>>k;
	k=k%n;
	for(int i=n-k;i<n;i++)
	cout<<arr[i]<<" ";
	for(int i=0;i<n-k;i++)
	cout<<arr[i]<<" ";
	return 0;
}
