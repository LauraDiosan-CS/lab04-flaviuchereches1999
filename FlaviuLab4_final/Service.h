#pragma once
#include"Examen.h"
#include"Repo.h"
using namespace std;

class Service {
private:
	Repo repo;
	Examen examene_nota[100];
	int note;
public:
	Service();
	~Service();
	Service(const Repo&);
	int getSize();
	void Bonus(char* copil);
	Examen* getAll();
	Examen* ExameneNota(int min);
	int getNote();
	void NoteZero();	
	int GasesteExamen(Examen e);
	void addExamen(Examen e);
	void deleteExamen(Examen e);
	void updateExamen(int poz, Examen e1);
};