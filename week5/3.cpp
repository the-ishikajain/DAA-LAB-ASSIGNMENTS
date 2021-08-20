#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,i,j,m;
		cin>>n;
		int a1[n];
		for(i=0;i<n;i++)
		cin>>a1[i];
		cin>>m;
		int a2[m];
		for(j=0;j<m;j++)
		cin>>a2[j];
		i=0;j=0;
        while(i<n && j<m)
        {
        	 if(a1[i]==a2[j])
        	 {
        	 cout<<a1[i]<<" ";
        	 i++;
        	 j++;
             }
        	 else if(a1[i]<a2[j])
        	 {
        	 	i++;
			 }
			 else if(a1[i]>a2[j])
			 {
			 	j++;
			 }
		}
}
