#pragma once
#include "Sprites.h"
#include "Logger.h"
#include "ID.h"
#include "InputManager.h"
#include <vector>
using namespace Logger;
using namespace std;

enum Direction { UP, DOWN, LEFT, RIGHT };

class Snake {
public:
	int x;
	int y;
	bool dead;
	Sprite temp;
	vector<Sprite> body;
	Snake();
	~Snake();
	int dir = RIGHT;
	void InitialPos(int, int);
	void Draw();
	void Aumentar();
	void Die(int, int);
	void Move();
};