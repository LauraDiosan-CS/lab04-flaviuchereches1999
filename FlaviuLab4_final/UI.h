#pragma once
#include"Examen.h"
#include "Service.h"

class UI {
private:
	Service S;
	void Afisare();
	void showMenu();
	void Adaugare();
	void Updatare();
	void Stergere();
	void Note();
	void Bonus();
	void Undo();
public:
	UI();
	~UI();
	void Run();
};