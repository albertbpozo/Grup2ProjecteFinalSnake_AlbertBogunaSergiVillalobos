#include "Niveles.h"
#include "GameScene.h"
#include "Manzana.h"
#include "ID.h"
#include "XML.h"
#include "InputManager.h"
#include "Logger.h"
#include "Score.h"
#include "SceneManager.h"
#include <vector>

#include <XML/rapidxml_utils.hpp>

Score::Score(){
	level = 1;
	recojidas = 0;
	score = 0;
	bestScore = 0;
	levelScore = 0;
	levelRecojidas = 0;
	vidas = 3;
}
Score::~Score() {

}
void Score::dead() {
	if (score > bestScore) {		bestScore = score;	}
	score = levelScore;
	vidas--;
	recojidas =levelRecojidas;
}
void	Score::scoreUp() {
		
		recojidas++;
		score += 100 * (recojidas - levelRecojidas);
		if (recojidas >= (2 + (level - 1)*Niveles::GetValue("incremental"))) {
			level++;
			levelScore = score;
			levelRecojidas = recojidas;
		}
	}




