// C++ program to print DFS traversal from
// a given vertex in a given graph
#include<iostream>
#include <vector>
#include <list>
using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;

	// function to add an edge to graph
	void addEdge(int v, int w);

	// DFS traversal of the vertices
	// reachable from v
	void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v�s list.
}

void Graph::DFS(int v)
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

// Driver code
int main()
{
	// Create a graph given in the above diagram
	Graph g;
	g.addEdge(1,2);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(2,5);
	g.addEdge(2,7);
	g.addEdge(2,8);
	g.addEdge(4,3);
	g.addEdge(3,9);
	g.addEdge(3,10);
	g.addEdge(5,6);
	g.addEdge(5,7);
	g.addEdge(5,8);
	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";
	g.DFS(1);

	return 0;
}

// improved by Vishnudev C

