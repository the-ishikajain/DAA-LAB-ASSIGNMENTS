#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,c=0,k;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		cout<<endl<<"KEY ELEMENT = ";
		cin>>k;
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
			c++;	
			}
			if(a[i]>k)
			{
				break;
			}
		}
		if(c==0)
		cout<<"Key not present"<<endl;
		else
		cout<<k<<"-"<<c<<endl;
	}
}
