#pragma once
#include "Examen.h"

class Repo {
private:
	Examen examene[100];
	int n;
public:
	Repo();
	~Repo();
	int GasesteExamen(Examen e);
	void addExamen(Examen s);
	void deleteExamen(Examen s);
	void updateExamen(int poz, Examen e1);
	Examen* getAll();
	int getSize();
};