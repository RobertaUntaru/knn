//.h file code:
#include "BFS.h"
#include "Node.h"
#include <iostream>
using namespace std;



Node::Node(double value, int operation)
{
	this->value = value;
	this->operation = operation;
	this->level = 0;
}

double Node::getValue()
{
	return value;
}

void Node::setValue(double value)
{
	this->value = value;
}

int Node::getLevel()
{
	return level;
}

void Node::setLevel(int level)
{
	this->level = level;
}

int Node::getOperation()
{
	return operation;
}

void Node::setOperation(int operation)
{
	this->operation = operation;
}
