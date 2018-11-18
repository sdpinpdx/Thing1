// Thing1.cpp : Defines the entry point for the application.
//

#include "Thing1.h"
#include <vector>
#include "Types.h"

using namespace std;

void init_nodes()
{
	vector<Node> nodes;

	nodes.push_back(Node());
}

int main()
{
	cout << "Hello CMake." << endl;
	init_nodes();
	return 0;
}
