#pragma once
#include <string>

class Interface {
public:
	std::string name;
	// RX Freq(s) and mode(s)
	// TX Freq(s) and mode(s)
	Interface(const std::string& _name) : name(_name) {};
	Interface() {};
};
