#include<iostream>
#include<cassert>
#include<string>
#include"Teste.h"
using namespace std;

void TestServ() {
	char nume[7] = "Flaviu";
	char nume_1[7] = "Michal";
	char nume_2[8] = "Jackson";
	char data[11] = "13.12.2013";
	char data_1[11] = "18.09.2013";
	char data_2[11] = "19.13.2013";

	Service S;
	Examen e(nume, data, 5);
	Examen e1(nume_1, data_1, 7);
	Examen e2(nume_2, data_2, 9);
	Examen e3(nume, data, 6);
	S.addExamen(e);
	S.addExamen(e1);
	S.addExamen(e2);
	S.updateExamen(1, e2);
	S.deleteExamen(e2);
	S.Bonus(nume);

	assert(S.GasesteExamen(e2) == 1);
	assert(S.getSize() == 2);
	assert(S.getAll()[0] == e3);
	assert(S.getAll()[0].getNota() == 6);
	assert(S.getAll()[1] == e2);
}

//---------------------------------------------------------------------------------------

void TestRepo() {
	char nume[7] = "Flaviu";
	char nume_1[7] = "Michal";
	char nume_2[8] = "Jackson";
	char data[11] = "13.12.2013";
	char data_1[11] = "18.09.2013";
	char data_2[11] = "19.13.2013";

	Repo R;
	Examen e(nume, data, 5);
	Examen e1(nume_1, data_1, 7);
	Examen e2(nume_2, data_2, 9);
	R.addExamen(e);
	R.addExamen(e1);
	R.addExamen(e2);
	R.updateExamen(1, e2);
	R.deleteExamen(e2);

	assert(R.GasesteExamen(e) == 0);
	assert(R.getSize() == 2);
	assert(R.getAll()[0] == e);
	assert(R.getAll()[1] == e2);
}

//---------------------------------------------------------------------------------------

void TestExamen() {
	char nume_1[7] = "Michal";
	char nume_2[8] = "Jackson";
	char nume_set[10] = "Bethoven";
	char data_1[11] = "18.09.2013";
	char data_2[11] = "19.13.2013";
	char data_set[11] = "01.01.1900";

	Examen e1(nume_1, data_1, 7);
	Examen e2(nume_2, data_2, 9);
	e2.setNume(nume_set);
	e2.setData(data_set);
	e2.setNota(10);

	assert(strcmp(e1.getNume(), nume_1) == 0);
	assert(strcmp(e1.getData(), data_1) == 0);
	assert(e1.getNota() == 7);
	assert(strcmp(e2.getNume(), nume_set) == 0);
	assert(strcmp(e2.getData(), data_set) == 0);
	assert(e2.getNota() == 10);
}
