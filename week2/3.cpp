#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n,i,k,j,c=0;
		cin>>n;
		int a[n];
		for(i=1;i<=n;i++)
		cin>>a[i];
		cout<<endl<<"KEY ELEMENT = ";
		cin>>k;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if(abs(a[i]-a[j])==k)
				{
					c++;
				}
			}
		}
		cout<<"Count = "<<c<<endl;
	}
}
