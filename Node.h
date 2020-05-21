
#include <unordered_map>
#include "BFS.h"
#include "Utils.h"
#include<iostream>
using namespace std;

class Node
{

private:
	double value = 0;
	int level = 0;
	int operation = 0;

public:

	std::unordered_map<int, Node*> childs = std::unordered_map<int, Node*>();

	Node(double value, int operation);

	virtual double getValue();

	virtual void setValue(double value);

	virtual int getLevel();

	virtual void setLevel(int level);

	virtual int getOperation();

	virtual void setOperation(int operation);

};
