#ifndef __SPRITEDEF_H__
#define __SPRITEDEF_H__

class SpriteDef{
	struct Modulo{
		int id;
		int x;
		int y;
		int w;
		int h;
	};
public:
	Modulo modulo[3];//Numero de modulos
	SpriteDef();//Constructor
};
#endif