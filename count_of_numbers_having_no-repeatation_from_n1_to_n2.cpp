#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n1,n2,count=0;
	cin>>n1>>n2;
	int arr[10];
	for(int i=0;i<10;i++)
	arr[i]=0;
	for(int i=n1;i<=n2;i++)
	{
	    int x=i;
	    while(x){
	        int k=x%10;
	        x=x/10;
	        arr[k]++;
	    }
	    for(int j=0;j<10;j++)
	    {
	        if(arr[j]>1)
	        {
	            count++;
	            break;
	        }
	    }
	    for(int k=0;k<10;k++)
	    {
	        arr[k]=0;
	    }
	}
	cout<<n2-n1+1-count;
	return 0;
}
