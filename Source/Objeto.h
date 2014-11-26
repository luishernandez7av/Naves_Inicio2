#ifndef __OBJETO_H__
#define __OBJETO_H__
#include "Sprite.h"

class Objeto{

int x;
int y;
int w;
int h;
int posicionActual;
int posicionFinal;
int posicionBrinco;
int stepsActual;
int stepsFinal;
int moduleUsing;//Modulo en uso

Sprite * sprite;

bool isVisible;

public:
	void SetVisible(bool isVisible);
	void Pintar(int module,int x,int y);

	Objeto(SDL_Surface * screen, char * rutaImagen, int x, int y, int module);
	~Objeto();
	void Pintar();
	//
	void Mover(int posicion);
	//
	void MoverIzquierda(int posicion);
	void MoverArriba(int posicion);
	void MoverAbajo(int posicion);
	//
	void Mover(int brinco, int puntoFinal);
	void SetStep(int stepsFinal);
	void IncrementarStep();
	int ObtenerStepActual();
	void Actualizar();
	bool IsRunningAnimacion();
	void TerminarAnimacion();

	int obtenerX();
	int obtenerY();
	int obtenerW();
	int obtenerH();
	void ponerEn(int x, int y);

	
	//bool collision (SDL_Rect* nave, SDL_Rect* enemigoArreglo);
	
		/*
		//mandar esto a objeto.cpp
	if (nave-> y >= enemigoArreglo->y + enemigoArreglo->h)
		return 0;
	if (nave->x >= enemigoArreglo->x + enemigoArreglo->w)
		return 0;
	if (nave->y + nave->h<= enemigoArreglo->y)
		return 0;
	if (nave->x + nave->w<= enemigoArreglo->x)
		return 0;
	return 1;
	*/
	
	

};

#endif