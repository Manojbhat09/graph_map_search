/*
 * (C) 2014 Douglas Sievers
 *
 * Graph.h
 */

#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "Node.h"
#include "Edge.h"

using namespace std;
using namespace boost;

// ---------------------------------------------------------------------------------/
// The Graph class defines a graph data structure. It consists of both nodes (or	/
// vertices) and edges (links) between the nodes.									/
//																					/
// Internally there is a list of nodes, and list of edges, each stored in a vector	/
// with shared_ptr's to each element.												/
//																					/
// Currently, the graph can only be generated by reading in a formatted text file,  /
// although it could easily be extended to generate graphs from a console program.	/
// ---------------------------------------------------------------------------------/

class Graph
{
public:

	// public utility functions
	//

	nodePtr findNode(const string&) const;
	nodePtr nodeAt(const int) const;
	void readFile(const string&);
	void print() const;
	int printNodeList() const;
	void clearSearchState();

private:
	vector<nodePtr> nodeList;
	vector<edgePtr> edgeList;

	// private utility functions
	//

	void addNode(const string&);
	void addNode(const string&, const float, const float);
	void addEdge(const string&);
	void addEdge(const string&, const string&, const float, const string&);
};

#endif /* GRAPH_H */