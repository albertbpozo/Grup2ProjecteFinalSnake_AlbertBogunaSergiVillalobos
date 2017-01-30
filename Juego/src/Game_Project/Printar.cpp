#include "Printar.h"
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <string> 


void Printar::printScore(int score, int lives) {

	TTF_Font* Sans = TTF_OpenFont("arial.ttf", 64); //this opens a font style and sets a size

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