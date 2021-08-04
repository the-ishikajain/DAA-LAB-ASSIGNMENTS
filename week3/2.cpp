#include<bits/stdc++.h>
using namespace std;
int main()
{
	int min,i,j,n,t,swaps,comp;
	cin>>t;
	while(t--)
	{
		swaps=0;
		comp=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n-1;i++)
		{
			min=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[min])
				{
					min=j;
			    }
			    comp++;
			}
			int t=a[i];
			a[i]=a[min];
			a[min]=t;
			swaps++;
		}
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl<<"COMPARISONS ="<<comp<<endl;
		cout<<"SWAPS ="<<swaps<<endl;
	}
}
