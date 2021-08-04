#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,j,t1,comp,shifts;
	cin>>t;
	while(t--)
	{
		comp=0;
		shifts=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=1;i<n;i++)
		{
			t1=a[i];
			j=i-1;
			while(j>=0 && a[j]>t1)
			{
				a[j+1]=a[j];
				j--;
				comp++;
			}
			a[j+1]=t1;
			shifts++;
		}
		cout<<endl<<"OUTPUT :"<<endl;
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl<<"COMPARISONS ="<<comp<<endl;
		cout<<"SHIFTS ="<<shifts+comp<<endl;
	}
}
