#pragma once
#include <vector>
#include "Interface.h"

class Node {
public:
	std::string name;
	// Location
	std::vector<Interface> interfaces;
	Node() {};
	Node(const std::string& _name) : name(_name) {};
	Node(const std::string& _name, const std::vector<Interface>& _interfaces) :
		name(_name), interfaces(_interfaces) {};
};