#include "Objeto.h"
#include "Config.h"
#include "Sprite.h"

Objeto::Objeto(SDL_Surface * screen, char * rutaImagen, int x, int y, int module){
	moduleUsing=module;
	//+5
	sprite->borrarFondoNave();
	//-5

	sprite = new Sprite(screen);
	sprite->CargarImagen(rutaImagen);
	w=sprite->WidthModule(moduleUsing);
	h=sprite->HeightModule(moduleUsing);

	this->x=x;//(WIDTH_SCREEN / 2)-(w/2);
	this->y=y;//(HEIGHT_SCREEN-80)-(h);
	stepsActual=0;
	posicionBrinco=0;
	posicionActual=0;
	isVisible=true;
}
Objeto::~Objeto(){
	delete sprite;
}
void Objeto::Pintar(){
if (isVisible)
	sprite->PintarModulo(moduleUsing,x,y);
}
void Objeto::Pintar(int module,int x,int y){
if (isVisible)
	sprite->PintarModulo(module,x,y);
}
//
void Objeto::Mover(int posicion){
	x += posicion;
}
//
void Objeto::MoverIzquierda(int posicion){
	x -= posicion;
}
void Objeto::MoverArriba(int posicion){
	y -= posicion;
}
void Objeto::MoverAbajo(int posicion){
	y += posicion;
}
//
int Objeto::obtenerX(){
	return x;
}
int Objeto::obtenerY(){
	return y;
}
int Objeto::obtenerW(){
	return w;
}
int Objeto::obtenerH(){
	return h;
}
void Objeto::ponerEn(int x, int y){
	this->x=x;
	this->y=y;
}
void Objeto::Mover(int brinco, int puntoFinal){
	if(posicionBrinco<=0){
	posicionBrinco=brinco;
	posicionFinal=puntoFinal;
	}
}

void Objeto::Actualizar(){
	if(posicionBrinco !=0){
		if(posicionActual<=posicionFinal){
		Mover(posicionBrinco);
		posicionActual++;
	}
		else{
			TerminarAnimacion();
		}
	}
}
	void Objeto::SetStep(int stepsFinal){
		this->stepsFinal=stepsFinal;
	}
	void Objeto::IncrementarStep(){
		stepsActual++;
		if(stepsActual>=stepsFinal)
			stepsActual=0;
	}
	int Objeto::ObtenerStepActual(){
		return stepsActual;
	}
	bool Objeto::IsRunningAnimacion(){
		if(posicionBrinco==0)
			return false;
		else
			return true;
	}void Objeto::TerminarAnimacion(){
				posicionBrinco=0;
				posicionFinal=0;
				posicionActual=0;
				IncrementarStep();
	}
	//metodo
	void Objeto::SetVisible(bool isVisible){
	this->isVisible=isVisible;
	}
	///////////////////////////////////////////////////////////
	bool collision (SDL_Rect* nave, SDL_Rect* enemigoArreglo){
if (nave-> y >= enemigoArreglo->y + enemigoArreglo->h)
		return 0;
	if (nave->x >= enemigoArreglo->x + enemigoArreglo->w)
		return 0;
	if (nave->y + nave->h<= enemigoArreglo->y)
		return 0;
	if (nave->x + nave->w<= enemigoArreglo->x)
		return 0;
	return 1;
	}
	