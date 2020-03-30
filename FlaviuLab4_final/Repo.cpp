#include "Repo.h"

Repo::Repo() {
	this->n = 0;
}

Repo::~Repo() {
	this->n = 0;
}

void Repo::addExamen(Examen s) {
	this->examene[this->n++] = s;
}

void Repo::deleteExamen(Examen s) {
	int poz = this->GasesteExamen(s);
	if (poz >= 0 && poz <= n - 1) {
		for (int i = poz; i <= n - 2; i++)
			this->examene[i] = this->examene[i + 1];
		n--;
	}
}

void Repo::updateExamen(int poz, Examen e1) {
	examene[poz] = e1;
}

int Repo::GasesteExamen(Examen e) {
	for (int i = 0; i < this->n; i++) {
		if (e == this->examene[i]) {
			return i;
		}
	}
	return -1;
}

Examen* Repo::getAll() {
	return this->examene;
}

int Repo::getSize() {
	return this->n;
}