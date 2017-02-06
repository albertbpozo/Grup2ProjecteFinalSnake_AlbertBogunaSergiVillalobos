#include "Printar.h"
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <string> 
#include "Binario.h"


void Printar::printScore(int score, int lives) {

	TTF_Font* Sans = TTF_OpenFont("arial.ttf", 20); //this opens a font style and sets a size

	SDL_Renderer* renderer = R.m_SDLRenderer;

	SDL_Color White = { 0,0,0 };  // this is the color in rgb format, maxing out all would give you the color white, and it will be your text's color

	string text = "Score: " + to_string(score);

	string text2 = "Lives: " + to_string(lives);

	SDL_Surface* surfaceMessage = TTF_RenderText_Solid(Sans, text.c_str(), White); // as TTF_RenderText_Solid could only be used on SDL_Surface then you have to create the surface first

	SDL_Surface* surfaceMessage2 = TTF_RenderText_Solid(Sans, text2.c_str(), White);

	SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage); //now you can convert it into a texture

	SDL_Texture* Message2 = SDL_CreateTextureFromSurface(renderer, surfaceMessage2); //now you can convert it into a texture

	SDL_Rect Message_rect; //create a rect
	Message_rect.x = 760;  //controls the rect's x coordinate
	Message_rect.y = 10; // controls the rect's y coordinte
	Message_rect.w = 220; // controls the width of the rect
	Message_rect.h = 30; // controls the height of the rect

	SDL_Rect Message2_rect; //create a rect
	Message2_rect.x = 760;  //controls the rect's x coordinate
	Message2_rect.y = 50; // controls the rect's y coordinte
	Message2_rect.w = 220; // controls the width of the rect
	Message2_rect.h = 30; // controls the height of the rect

						  //Mind you that (0,0) is on the top left of the window/screen, think a rect as the text's box, that way it would be very simple to understance

						  //Now since it's a texture, you have to put RenderCopy in your game loop area, the area where the whole code executes

	SDL_RenderCopy(renderer, Message, NULL, &Message_rect);

	SDL_RenderCopy(renderer, Message2, NULL, &Message2_rect);


	}

void Printar::printRank() {
	std::vector<Tops> rank;
	rank = Bin.readBin();
	TTF_Font* Sans = TTF_OpenFont("arial.ttf", 20); //this opens a font style and sets a size

	SDL_Renderer* renderer = R.m_SDLRenderer;

	SDL_Color White = { 0,0,0 };  // this is the color in rgb format, maxing out all would give you the color white, and it will be your text's color

	string text = "1: "+ rank[0].name + " " +to_string(rank[0].score);

	string text1 = "2: " + rank[1].name + " " + to_string(rank[1].score);

	string text2 = "3: " + rank[2].name + " " + to_string(rank[2].score);

	string text3 = "4: " + rank[3].name + " " + to_string(rank[3].score);

	string text4 = "5: " + rank[4].name + " " + to_string(rank[4].score);

	string text5 = "6: " + rank[5].name + " " + to_string(rank[5].score);
	
	string text6 = "7: " + rank[6].name + " " + to_string(rank[6].score);

	string text7 = "8: " + rank[7].name + " " + to_string(rank[7].score);

	string text8 = "9: " + rank[8].name + " " + to_string(rank[8].score);

	string text9 = "10: " + rank[9].name + " " + to_string(rank[9].score);

	SDL_Surface* surfaceMessage = TTF_RenderText_Solid(Sans, text.c_str(), White); // as TTF_RenderText_Solid could only be used on SDL_Surface then you have to create the surface first
	
	SDL_Surface* surfaceMessage1 = TTF_RenderText_Solid(Sans, text1.c_str(), White);
	
	SDL_Surface* surfaceMessage2 = TTF_RenderText_Solid(Sans, text2.c_str(), White);

	SDL_Surface* surfaceMessage3 = TTF_RenderText_Solid(Sans, text3.c_str(), White);

	SDL_Surface* surfaceMessage4 = TTF_RenderText_Solid(Sans, text4.c_str(), White);

	SDL_Surface* surfaceMessage5 = TTF_RenderText_Solid(Sans, text5.c_str(), White);

	SDL_Surface* surfaceMessage6 = TTF_RenderText_Solid(Sans, text6.c_str(), White);

	SDL_Surface* surfaceMessage7 = TTF_RenderText_Solid(Sans, text7.c_str(), White);

	SDL_Surface* surfaceMessage8 = TTF_RenderText_Solid(Sans, text8.c_str(), White);

	SDL_Surface* surfaceMessage9 = TTF_RenderText_Solid(Sans, text9.c_str(), White);

	SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage); //now you can convert it into a texture

	SDL_Texture* Message1 = SDL_CreateTextureFromSurface(renderer, surfaceMessage1); 

	SDL_Texture* Message2 = SDL_CreateTextureFromSurface(renderer, surfaceMessage2);

	SDL_Texture* Message3 = SDL_CreateTextureFromSurface(renderer, surfaceMessage3);
	
	SDL_Texture* Message4 = SDL_CreateTextureFromSurface(renderer, surfaceMessage4);
	
	SDL_Texture* Message5 = SDL_CreateTextureFromSurface(renderer, surfaceMessage5);
	
	SDL_Texture* Message6 = SDL_CreateTextureFromSurface(renderer, surfaceMessage6);
	
	SDL_Texture* Message7 = SDL_CreateTextureFromSurface(renderer, surfaceMessage7);
	
	SDL_Texture* Message8 = SDL_CreateTextureFromSurface(renderer, surfaceMessage8);

	SDL_Texture* Message9 = SDL_CreateTextureFromSurface(renderer, surfaceMessage9);


	SDL_Rect Message_rect; //create a rect
	Message_rect.x = 360;  //controls the rect's x coordinate
	Message_rect.y = 10; // controls the rect's y coordinte
	Message_rect.w = 220; // controls the width of the rect
	Message_rect.h = 30; // controls the height of the rect

	SDL_Rect Message1_rect;
	Message1_rect.x = 360;
	Message1_rect.y = 50;
	Message1_rect.w = 220;
	Message1_rect.h = 30;

	SDL_Rect Message2_rect; 
	Message2_rect.x = 360;  
	Message2_rect.y = 90; 
	Message2_rect.w = 220;
	Message2_rect.h = 30; 

	SDL_Rect Message3_rect;
	Message3_rect.x = 360;
	Message3_rect.y = 130;
	Message3_rect.w = 220;
	Message3_rect.h = 30;
	
	SDL_Rect Message4_rect;
	Message4_rect.x = 360;
	Message4_rect.y = 170;
	Message4_rect.w = 220;
	Message4_rect.h = 30;
	
	SDL_Rect Message5_rect;
	Message5_rect.x = 360;
	Message5_rect.y = 210;
	Message5_rect.w = 220;
	Message5_rect.h = 30;
	
	SDL_Rect Message6_rect;
	Message6_rect.x = 360;
	Message6_rect.y = 250;
	Message6_rect.w = 220;
	Message6_rect.h = 30;

	SDL_Rect Message7_rect;
	Message7_rect.x = 360;
	Message7_rect.y = 290;
	Message7_rect.w = 220;
	Message7_rect.h = 30;
	
	SDL_Rect Message8_rect;
	Message8_rect.x = 360;
	Message8_rect.y = 330;
	Message8_rect.w = 220;
	Message8_rect.h = 30;
	
	SDL_Rect Message9_rect;
	Message9_rect.x = 360;
	Message9_rect.y = 370;
	Message9_rect.w = 220;
	Message9_rect.h = 30;

						  //Mind you that (0,0) is on the top left of the window/screen, think a rect as the text's box, that way it would be very simple to understance

						  //Now since it's a texture, you have to put RenderCopy in your game loop area, the area where the whole code executes

	SDL_RenderCopy(renderer, Message, NULL, &Message_rect);
	SDL_RenderCopy(renderer, Message1, NULL, &Message1_rect);
	SDL_RenderCopy(renderer, Message2, NULL, &Message2_rect); 
	SDL_RenderCopy(renderer, Message3, NULL, &Message3_rect);
	SDL_RenderCopy(renderer, Message4, NULL, &Message4_rect);
	SDL_RenderCopy(renderer, Message5, NULL, &Message5_rect);
	SDL_RenderCopy(renderer, Message6, NULL, &Message6_rect);
	SDL_RenderCopy(renderer, Message7, NULL, &Message7_rect);
	SDL_RenderCopy(renderer, Message8, NULL, &Message8_rect);
	SDL_RenderCopy(renderer, Message9, NULL, &Message9_rect);
}