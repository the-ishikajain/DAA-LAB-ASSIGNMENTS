#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,p,i;
	cin>>t;
	while(t--)
	{
		int n,k,p=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
			int start=0;
		int end=n-1;
	     i=1;
		int mid=(start+end)/2;
		while(mid>0 && start<=end)
		{
		if(a[mid]==k)
		{
			cout<<"PRESENT "<<i<<endl;
			p=1;
			break;
		}
		else if(a[mid]>k)
		{
			end=mid-1;
			mid=(start+end)/2;
		}
		else
		{
			start=mid+1;
			mid=(start+end)/2;
		}
		i++;
	}
	if(p==0)
	{
		cout<<"NOT PRESENT "<<i-1<<endl;
	}
	}
}
