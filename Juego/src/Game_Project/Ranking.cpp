#include "Ranking.h"
#include "Niveles.h"
#include "ID.h"
#include "InputManager.h"
#include "Logger.h"
#include "Binario.h"
#include "SceneManager.h"
using namespace Logger;



Ranking::Ranking() {
	background = { { 0, 0, W.GetWidth(), W.GetHeight() }, ObjectID::S_00 };
	menu = { { 222, 550, W.GetWidth() / 3, W.GetHeight() / 3 }, ObjectID::S_13 };
	exit = { { 502,550,W.GetWidth() / 3, W.GetHeight() / 3 }, ObjectID::S_06 };

}
Ranking::~Ranking() {
}
void Ranking::OnEntry(void) {
	
	
}
void Ranking::OnExit(void) {
}
void Ranking::Update(void) {
	
	

	static MouseCoords mouseCoords(0, 0); 
	if (IM.IsMouseDown<MOUSE_BUTTON_LEFT>()) { 
		mouseCoords = IM.GetMouseCoords();  
		
		 if ((mouseCoords.x >= 290 && mouseCoords.x <= 474) && (mouseCoords.y >= 563 && mouseCoords.y <= 690)) {
			 SM.SetCurScene<MainMenu>();
		}
		 else if ((mouseCoords.x >= 573 && mouseCoords.x <= 756) && (mouseCoords.y >= 563 && mouseCoords.y <= 690)) {
			 SetState<SceneState::EXIT>();
		 }
	}

}
void Ranking::Draw(void) {
	background.Draw();
	rank.printRank();
	menu.Draw();
	exit.Draw();
}