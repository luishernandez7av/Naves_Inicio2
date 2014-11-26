#include "SpriteDef.h"
#include "Config.h"

SpriteDef::SpriteDef(){
	//minave
	modulo[0].id =0;
	modulo[0].x=0;
	modulo[0].y=0;
	modulo[0].w=64;
	modulo[0].h=64;
	//menu
	modulo[1].id=1;
	modulo[1].x=0;
	modulo[1].y=0;
	modulo[1].w=WIDTH_SCREEN;
	modulo[1].h=HEIGHT_SCREEN;
	//enemigo
	modulo[2].id=2;
	modulo[2].x=0;
	modulo[2].y=0;
	modulo[2].w=54;
	modulo[2].h=61;
		//bala modulo_balas_bala1
	modulo[3].id=3;
	modulo[3].x=0;
	modulo[3].y=0;
	modulo[3].w=5;
	modulo[3].h=5;

}