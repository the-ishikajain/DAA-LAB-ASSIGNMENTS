#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,t=0,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			t=1;
			break;
		}
	}
	if(t==0)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES"<<endl;
		cout<<"number of comparisons are=";
		cout<<i+1;
	}
}
