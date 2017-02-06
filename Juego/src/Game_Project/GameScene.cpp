#include "GameScene.h"
#include "Binario.h"


GameScene::GameScene() {
	start = false;
}

GameScene::~GameScene() {

}

void GameScene::OnEntry(void) {
	
	
	if (!start) {
		columnas = Niveles::GetValue("columns");
		filas = Niveles::GetValue("rows");
		drawGrid.CreateTable(columnas, filas);
		start = true;
		int tempNum = round(columnas / 2);
		int tempNum2 = round(filas / 2);
		snake.InitialPos(tempNum * 30, tempNum2 * 30);
		manzana.Spawn();
		score.levelRecojidas = 0;
		score.recojidas = 0;
		score.level = 1;
		score.levelScore = 0;
		score.score = 0;
		score.vidas = 3;
	}
}

void GameScene::OnExit(void) {
	
}
int GameScene::GiveScore(void) {
	int vuelta = score.score;
	return score.score;
}
void GameScene::Update(void) {
		snake.Move();


		manzana.Comida(snake.x, snake.y);
		if (manzana.tocada) {
			snake.Aumentar();
			score.scoreUp();
		}


		snake.Die(columnas, filas);
		if (snake.dead) {
			if (score.vidas <= 0) {
				cout << "Enter name here -> ";
				getline(cin, nom);
				cout << endl << "Hello " << nom << endl;
				Bin.write(nom, score.bestScore);
				start = false;
				snake.dead = false;
				SM.SetCurScene <Ranking>();
				drawGrid.~Grid();

				//Bin.write(GameEngine::GiveName(), score.score);
			}
			else {
				score.dead(); snake.dead = false;
				for (int n = 0; n < score.levelRecojidas; n++) {
					snake.Aumentar();
				}
			}
		}

	
	
}

void GameScene::Draw(void) {
	if (start) {
		drawGrid.Draw();
		manzana.Draw();
		snake.Draw();
		printar.printScore(score.score, score.vidas);
	}
}
