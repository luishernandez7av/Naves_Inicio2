#ifndef __NAVE_H__
#define __NAVE_H__
#include "Sprite.h"

class Nave{

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
public:
	Nave(SDL_Surface * screen, char * rutaImagen, int x, int y, int module);
	~Nave();
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

};

#endif