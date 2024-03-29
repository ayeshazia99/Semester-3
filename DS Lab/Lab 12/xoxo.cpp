// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
#include<iostream>
#include <list>

using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
	public:
	int V; // No. of vertices

	// Pointer to an array containing adjacency
	// lists
	
	list<int> *adj;
	Graph(int V) //default constructor 
{
	this->V = V;
	adj = new list<int>[V];
}


void addEdge(int v, int w) //function to add edges 
{
	adj[v].push_back(w); // Add w to v�s list.
}

void BFS(int s) 
{
	// Mark all the vertices as not visited
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;

	// Create a queue for BFS
	list<int> queue;

	// Mark the current node as visited and enqueue it
	visited[s] = true;
	queue.push_back(s);

	// 'i' will be used to get all adjacent
	// vertices of a vertex
	list<int>::iterator i;

	while(!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		// Get all adjacent vertices of the dequeued
		// vertex s. If a adjacent has not been visited,
		// then mark it visited and enqueue it
		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}
};
// Driver program to test methods of graph class
int main()
{
	// Create a graph given in the above diagram
	Graph g(11);
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
	g.addEdge(7,8);
	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	g.BFS(1);

	return 0;
}

