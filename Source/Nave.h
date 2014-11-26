#ifndef _NAVE_H_
#define _NAVE_H_
#include "Objeto.h"
 
class Nave{
	Objeto *nave;
	Objeto *bala;

public:
	Nave(SDL_Surface * screen, char * rutaImagen, int x, int y, int module);
	//crear metodos
	void Pintar();
	void Disparar();
	void Actualizar();//le da vida a la bala
	void Mover();
	void MoverIzquierda();
	void MoverArriba();
	void MoverAbajo();
	Objeto * GetNaveObjeto();
};
#endif