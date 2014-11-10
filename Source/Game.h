#include <SDL.h>
#include <SDL_image.h>

#include <SDL.h>
#include <SDL_image.h>
#include "Nave.h"


class CGame 
{
public:
	bool Start();
	static CGame instanceGame;

	CGame();
	void Finalize();  //ACT2: Mal, Aqui dejaste un error, tu codigo debe ser compilable correctamente.
	enum Estado{
		ESTADO_INICIANDO,
		ESTADO_MENU,
		ESTADO_JUGANDO,
		ESTADO_TERMINADO,
		ESTADO_FINALIZADO,
<<<<<<< HEAD
		};

private:
	void Iniciando();
	void MoverEnemigo();
	bool esLimitePantalla(Nave *objeto, int bandera);
	//unsigned int x;

	Uint8 *keys;//esta variable para ver si determinadas teclas esta
	SDL_Event event;//la variable event de tipo evento de sdl nosservira para

	SDL_Surface *screen;
	Nave *nave;
	//Nave *enemigo;
	Nave **enemigoArreglo;

=======
	};

private:
	void Iniciando();
	SDL_Surface *screen;
>>>>>>> origin/master
	Estado estado;

	float enemigoParabola;
};