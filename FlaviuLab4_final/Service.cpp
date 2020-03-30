#include<iostream>
#include"Service.h"

Service::Service() {
	this->note = 0;
}

Service::Service(const Repo& R) {
	repo = R;
}

Service::~Service() {
	this->note = 0;
}

int Service::getSize() {
	return repo.getSize();
}

Examen* Service::getAll() {
	return repo.getAll();
}

void Service::addExamen(Examen e) {
	repo.addExamen(e);
}

void Service::deleteExamen(Examen e) {
	repo.deleteExamen(e);
}

int Service::GasesteExamen(Examen e) {
	return repo.GasesteExamen(e);
}

void Service::updateExamen(int poz, Examen e1) {
	repo.updateExamen(poz, e1);
}

void Service::Bonus(char* copil) {
	for (int i = 0; i < getSize(); i++) {
		if (strcmp(this->getAll()[i].getNume(), copil) == 0) {
			int nota = this->getAll()[i].getNota() + 1;
			getAll()[i].setNota(nota);
		}
	}
}

Examen* Service::ExameneNota(int min) {
	Examen* examene = getAll();
	int n = getSize();
	for (int i = 0; i < n; i++) {
		if (examene[i].getNota() >= min) {
			examene_nota[this->note++] = examene[i];
		}
	}
	return examene_nota;
}

int Service::getNote() {
	return this->note;
}

void Service::NoteZero() {
	this->note = 0;
}