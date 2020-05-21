
#include <vector>
#include <list>
#include <iostream>
#include <cmath>
#include <optional>
#include "Node.h"
using namespace std;

class BFS
{
private:
	Node *root;
	int target = 0;
	std::vector<Node*> path = std::vector<Node*>();

	// Constructor public
public:
	virtual ~BFS()
	{
		delete root;
	}

	BFS(double value, int target);

	// Metoda ce determina copiii unui nod in functie de operatie
	virtual Node *getChildNode(double value, int operation);

	// Functie prin care este parcurs arborele
	virtual void solution();

	virtual bool printPath(Node *node);
};
