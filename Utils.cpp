
#include <iostream>
#include "Utils.h"
#include "BFS.h"
#include "Node.h"
using namespace std;

double Utils::calcFactorial(double value)
{
	if (value > 100)
	{ // Pentru numerele mai mari de 100 se returneaza chiar numarul
		return value;
	}
	double factorial = 1;
	for (int integer = 1; integer <= value; integer++)
	{
		factorial = factorial * integer;
	}
	return factorial;
}
