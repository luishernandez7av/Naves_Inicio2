
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
		ESTADO_FINALIZADO
		};

private:
	Estado estado;
};