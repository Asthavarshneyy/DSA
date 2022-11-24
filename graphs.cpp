#include <bits/stdc++.h>
using namespace std;

template <typename T>
	class Graph
	{
		map<T, list<T>> l;

	public:
		void addEdge(T x, T y) //assuming bidir= true
    {
    l[x].push_back(y);
    l[y].push_back(x);
    }

    void DFShelper(T src, map <T, bool> &visited)
    {
      //recursive fn that will travers the graph
      visited[src]=true;
      //go to all nbrs of that node that is not visited yet
      for(T nbr: l[src])
      {
        if(!visited[nbr])
        DFShelper(nbr, visited);
      }
       cout<<src<<" ";
    }
	
    void dfs(T src)
    {
      map <T, bool> visited;
      //mark all the nodes as not visited in the beginning
      for(auto p: l)
      {
        T node=p.first;
        visited[node]=false;
      }
      DFShelper(src, visited);
    }
  };

  int main()
{
	Graph<int> g;
	g.addEdge(0, 3);
  g.addEdge(0,1);
	g.addEdge(1, 2);
  g.addEdge(2,3);
  g.addEdge(3, 4);
  g.addEdge(4, 5);
  g.dfs(0);

}


