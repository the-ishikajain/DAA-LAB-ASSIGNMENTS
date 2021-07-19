#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
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
		cout<<"NOT PRESENT ";
		cout<<i<<endl;
	}
	else
	{
		cout<<"PRESENT ";
		cout<<i+1<<endl;
	}
    }
}
