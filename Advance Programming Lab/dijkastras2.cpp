#include<bits/stdc++.h>   
using namespace std;

#define vertex 9

int minimumDist(int dist[], bool visited[]) 
{
	int min=INT_MAX,index;
              
	for(int i=0;i<vertex;i++) 
	{
		if(visited[i]==false && dist[i]<=min)      
		{
			min=dist[i];
			index=i;
		}
	}
	return index;
}

void Dijkstra(int graph[vertex][vertex],int src) // adjacency matrix used is 5x5
{
	int dist[vertex];                          
	bool visited[vertex];
	 
	for(int i = 0; i<vertex; i++)
	{
		dist[i] = INT_MAX;
		visited[i] = false;	
	}
	
	dist[src] = 0;   // Source vertex distance is set to zero.             
	
	for(int i = 0; i<vertex; i++)                           
	{
		int m=minimumDist(dist,visited);
		visited[m]=true;// m with minimum distance included in visited.
		for(int i = 0; i<vertex; i++)                  
		{
			// Updating the minimum distance 
			if(!visited[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
				dist[i]=dist[m]+graph[m][i];
		}
	}
	cout<<"Vertex\t\tDistance from source"<<endl;
	for(int i = 0; i<vertex; i++)                      
	{ //Printing
		 
		cout<<i<<"\t\t\t"<<dist[i]<<endl;
	}
}

int main()
{
	int graph[vertex][vertex]={
					   {0, 4,  0, 0,  0,  0,  0, 8,  0},
					   {4, 0,  8, 0,  0,  0,  0, 11, 0}, 
                       {0, 8,  0, 7,  0,  4,  0, 0,  2}, 
                       {0, 0,  7, 0,  9,  14, 0, 0,  0}, 
                       {0, 0,  0, 9,  0,  10, 0, 0,  0}, 
                       {0, 0,  4, 14, 10, 0,  2, 0,  0}, 
                       {0, 0,  0, 0,  0,  2,  0, 1,  6}, 
                       {8, 11, 0, 0,  0,  0,  1, 0,  7}, 	
					   {0, 0,  2, 0,  0,  0,  6, 7,  0}};
	Dijkstra(graph,0);
	return 0;	                        
}
