#include "Sprite.h"
#include "SpriteDef.h"
#include "SDL.h"

void Sprite::CargarImagen(char*ruta){
		image= SDL_LoadBMP(ruta);
}

Sprite::Sprite(SDL_Surface * screen){
	this->screen =screen;
}

Sprite::~Sprite(){
	SDL_FreeSurface(image);
};
/*void Sprite::PintarModulo(int id, int x, int y, int h){
	SDL_Rect src;
	src.x=x;
	src.y= y;
	src.w= w;
	src.h= h;
	SDL_BlitSurface(image, &src, screen, NULL);

}
*/
void Sprite::PintarModulo(int id, int x, int y){
SDL_Rect src;
	src.x= spriteDef.modulo [id].x;
	src.y= spriteDef.modulo [id].y;
	src.w= spriteDef.modulo [id].w;
	src.h= spriteDef.modulo [id].h;
	SDL_Rect dest;
	dest.x =x;
	dest.y =y;
	SDL_BlitSurface(image, &src, screen, &dest);
}
int Sprite::WidthModule(int id){
	return spriteDef.modulo[id].w;
}

int Sprite::HeightModule(int id){
	return spriteDef.modulo[id].h;
}