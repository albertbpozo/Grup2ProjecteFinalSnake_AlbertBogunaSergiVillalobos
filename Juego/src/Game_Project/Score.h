#pragma once
#include "Niveles.h"
#include "GameScene.h"
#include "ID.h"
#include "XML.h"
#include "InputManager.h"
#include "Logger.h"
#include "SceneManager.h"
#include "Manzana.h"
#include <vector>
#include <XML/rapidxml_utils.hpp>

class Score {
public:
	int level;
	int recojidas;
	int score;
	int bestScore;
	int levelScore ;
	int levelRecojidas;
	int vidas;
	Score();
	~Score();
	void scoreUp();
	void dead();
	
};

