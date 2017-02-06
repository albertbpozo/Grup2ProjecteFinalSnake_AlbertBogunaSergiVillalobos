#include "Niveles.h"
#include "GameScene.h"
#include "Manzana.h"
#include "Score.h"
#include "ID.h"
#include "XML.h"
#include "InputManager.h"
#include "Logger.h"
#include"GameScene.h"
#include "SceneManager.h"
#include <vector>
#include <XML/rapidxml_utils.hpp>


Manzana::Manzana() {
	tocada = false;
}
Manzana::~Manzana() {
}

void	Manzana::Draw()	{
	if (!tocada) {
		dibujoManzana.Draw();
	}
	else {
		tocada = false;
	}
}

void	Manzana::Comida(	int	snakex,	int	snakey) {
	if (x == snakex&&y == snakey) {
		tocada = true;
		x = ((rand() % Niveles::GetValue("rows") * 30));
		y = ((rand() % Niveles::GetValue("columns") * 30));
		dibujoManzana.transform = { x,y,30,30 };
		
	}
	
}
void Manzana::Spawn() {
	x	=	((rand()	%	Niveles::GetValue("rows")	*	30));
	y	=	((rand()	% Niveles::GetValue("columns")	*	30));
	dibujoManzana.objectID	=	ObjectID::S_10;
	dibujoManzana.transform	=	{ x,y,30,30 };
	
}