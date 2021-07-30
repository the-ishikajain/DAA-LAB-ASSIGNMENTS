#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int n,flag=0,found=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n-2;i++)
		{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if((a[i]+a[j])==a[k])
				{
					flag=1;
					break;
				}
				else if((a[i]+a[j])<a[k])
				{
					break;
				}
			}
			if(flag==1)
			{
				found=1;
				break;
			}
		}
		if(found==1)
		{
			cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
			break;
		}	
		
		}
		if(found==0)
		{
        cout<<"NO SEQUENCE FOUND"<<endl;
        }
	}
}
