#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,flag=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		i=0;j=n-1;
		int sum;
		cin>>sum;
		while(i<j)
		{
			if(a[i]+a[j]==sum)
			{
				cout<<a[i]<<" "<<a[j]<<endl;
				i++;
				j--;
				flag=1;
			}
			else if(a[i]+a[j]<sum)
			{
				i++;
			}
			else
			j--;
		}
		if(flag==0)
		cout<<"NO pair exits"<<endl;
	}
}
