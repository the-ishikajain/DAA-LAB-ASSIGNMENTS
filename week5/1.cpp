#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c=0;
		int n,i;
		cin>>n;
		char ch[n];
		for(i=0;i<n;i++)
		cin>>ch[i];
		int a[26];
		for(i=0;i<26;i++)
		{
			a[i]=0;
		}
		for(i=0;i<n;i++)
		{
			++a[int(ch[i])-97];
		}
		char t;
		for(i=0;i<26;i++)
		{
			if(a[i]>c)
			{
				c=a[i];
				t=char(i+97);
			}
	   }
	   	   if(c>1)
		   {
		   	cout<<t<<"  -  "<<c<<endl;
		   }	
			   else
		cout<<"NO DUPLICATES FOUND"<<endl;
	}
}
