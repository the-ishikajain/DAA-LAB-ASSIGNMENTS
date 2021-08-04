#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,n,flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
			flag=1;
			break;
			}
		}
		if(flag==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
		
	}
}
