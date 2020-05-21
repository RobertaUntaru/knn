#include <iostream>
#include <optional>
#include <queue>
#include <list>
#include "BFS.h"
#include "Utils.h"
#include "Node.h"
using namespace std;

BFS::BFS(double value, int target)
{
	this->root = new Node(value, 0);
	this->target = target;
}

Node *BFS::getChildNode(double value, int operation)
{
	Node *node;

	if (operation == 1)
	{
		node = new Node(std::sqrt(value), operation);
	}
	else if (operation == 2)
	{
		node = new Node(Utils::calcFactorial(value), operation);
	}
	else
	{
		node = new Node(std::floor(value), operation);
	}

	//JAVA TO C++ CONVERTER TODO TASK: A 'delete node' statement was not added since node was used in a 'return' or 'throw' statement.
	return node;
}

void BFS::solution()
{
	std::list<Node*> queue; 
	//std::queue<Node *>queue;
	queue.push_back(root); // Se adauga radacina

	while (!queue.empty())
	{ // Cat timp exista elemente in Coada
		Node *node	= queue.pop_front(); // Se extrage primul element
		Node *child;

		for (int integer = 1; integer <= 3; integer++)
		{ 
			child = getChildNode(node->getValue(), integer); 
			child->setLevel(node->getLevel() + 1); 

			if (child->getValue() != 1)
			{
				node->childs.emplace(integer, child);
				queue.push_back(child); 
			}
		}

		if (node->getValue() == target)
		{ 
			printPath(root); 
			break;
		}
	}

	for (int integer = path.size() - 1; integer >= 0; integer--)
	{
		if (path[integer]->getOperation() == 0)
		{
			std::wcout << L"root " << std::endl;
		}
		else if (path[integer]->getOperation() == 1)
		{
			std::wcout << L"sqrt" << std::endl;
		}
		else if (path[integer]->getOperation() == 2)
		{
			std::wcout << L"factorial" << std::endl;
		}
		else if (path[integer]->getOperation() == 3)
		{
			std::wcout << L"floor" << std::endl;
		}
	}
}

 bool BFS::printPath(Node *node)
{
	if (node == nullptr)
	{
		return false;
	}
	if (node->getValue() == target )
	{

		path.push_back(node); // Se aduaga in path nodul
		return true;
	}
	return false;
}
 
 
