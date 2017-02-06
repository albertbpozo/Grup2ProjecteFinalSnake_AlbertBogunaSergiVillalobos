#pragma once
#include "Scene.h"
#include "GameScene.h"
#include"MainMenu.h"
#include "Sprites.h"
#include "Printar.h"

class Ranking : public Scene
{
public: //decalaracion de cabeceras
	Printar rank;
	explicit Ranking();
	~Ranking() override;
	void OnEntry(void) override;
	void OnExit(void) override;
	void Update(void) override;
	void Draw(void) override;
private:
	Sprite background;
	Sprite menu;
	Sprite exit;

};