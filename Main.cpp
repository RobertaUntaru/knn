
#include <string>
#include <vector>
#include <iostream>
#include "BFS.h"
#include "Node.h"
using namespace std;
class MainClass
{

	static void main(std::vector<std::wstring> &args);

};

void MainClass::main(std::vector<std::wstring> &args)
{
	//long long startTime = System::currentTimeMillis();
	BFS tempVar(4, 3);
	(&tempVar)->solution();
	//long long stopTime = System::currentTimeMillis();
	//long long elapsedTime = stopTime - startTime;
	//std::wcout << L"Time: " << elapsedTime << std::endl;

	//std::wcout << std::endl;

	/*
	new Test();
	System.out.println();*/

}
