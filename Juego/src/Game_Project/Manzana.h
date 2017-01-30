#pragma once
#include "Niveles.h"
#include "GameScene.h"
#include "ID.h"
#include "XML.h"
#include "InputManager.h"
#include "Logger.h"
#include "SceneManager.h"
#include <vector>
#include <XML/rapidxml_utils.hpp>

class Manzana {
public:
	int x;
	int y;
	
	Sprite dibujoManzana;
	vector<Sprite> apple;
	bool tocada = false;
	Manzana();
	~Manzana();
	void Spawn();
	void Comida(int, int);
	void Draw();
};
