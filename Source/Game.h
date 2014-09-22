
class CGame
{
public:
	bool Start();
	static CGame instanceGame;

	CGame();
	void Finalize
	enum Estado{
		ESTADO_INICIANDO,
		ESTADO_MENU,
		ESTADO_JUGANDO,
		ESTADO_TERMINADO,
		ESTADO_FINALIZADO
		};

private:
	Estado estado;
};