#include<bits/stdc++.h>
using namespace std;
void dijkstra(int src,int n,vector<pair<int,int> > adj[])
{
	vector<pair<int,int> >::iterator it;
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int > > > pq;
	int dist[n];
	for(int i=0;i<n;i++)
	{
		dist[i]=INT_MAX;
	} 
    dist[src]=0;
    pq.push(make_pair(dist[src],src));
	while(!pq.empty())
	{
	    int dist1=pq.top().first;
	    int temp=pq.top().second;
		pq.pop();
		if(dist[temp]!=INT_MAX)
		{
			for(it=adj[temp].begin();it!=adj[temp].end();it++)
			{
				int dt=it->first;
				int dd=it->second;
				if(dist[dt] > dist[temp] + dd)
				{
					dist[dt]=dist[temp] + dd;
					pq.push(make_pair(dd,dt));
				}
			}
		}
	 } 
	 for(int i=0;i<n;i++)
	 {
	 	cout<<dist[i]<<" ";
	 }
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<pair<int,int> > adj[n];
	for(int i=0;i<m;i++)
	{
		int u,v,wt;
		cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}
	int src;
	cout<<"ENTER SOURCE = ";
	cin>>src;
	dijkstra(src,n,adj);
}
