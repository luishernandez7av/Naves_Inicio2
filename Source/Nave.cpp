#include "Nave.h"

void Nave::Pintar(){
	nave->Pintar();
}
Nave::Nave(SDL_Surface * screen, char * rutaImagen, int x, int y, int module){
     nave=new Objeto(screen,rutaImagen,x,y,module);
	 bala=new Objeto(screen, "../Data/bala.bmp",0,0,3);
	 bala->SetVisible(false);
}

void Nave::Mover(){
	nave->Mover(8);
}
void Nave::MoverIzquierda(){
	nave->MoverIzquierda(8);
}
void Nave::MoverArriba(){
	nave->MoverArriba(8);
}
void Nave::MoverAbajo(){
	nave->MoverAbajo(8);
}
Objeto * Nave::GetNaveObjeto(){
return nave;
}
void Nave::Disparar(){
bala->SetVisible(true);
bala->ponerEn(nave->obtenerX()+nave->obtenerW()/2,nave->obtenerY());
}
void Nave::Actualizar(){
bala->Pintar();
bala->MoverArriba(1);
}