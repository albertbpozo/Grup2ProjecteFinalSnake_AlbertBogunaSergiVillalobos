#pragma once
#include "Sprites.h"
#include "Logger.h"
#include "ID.h"
#include "InputManager.h"

using namespace Logger;
using namespace std;

template< typename T >
std::string ToString(const T& var)
{
	std::ostringstream oss;
	oss << var;
	return var.str();
}

class Printar {
public:
	int score;
	void printScore(int, int);
	void printRank();
};