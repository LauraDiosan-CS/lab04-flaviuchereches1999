#include "Examen.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;

Examen::Examen() {
	this->nume = NULL;
	this->data = NULL;
	this->nota = 0;
}

Examen::Examen(char* nume, char* data, int nota)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, 1 + strlen(data), data);
	this->nota = nota;
}

Examen::~Examen() {
	if (this->nume != NULL) {
		delete(this->nume);
	}
	if (this->data != NULL) {
		delete(this->data);
	}
}

Examen::Examen(const Examen& s) {
	this->nume = new char[strlen(s.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(s.nume), s.nume);
	this->data = new char[strlen(s.data) + 1];
	strcpy_s(this->data, 1 + strlen(s.data), s.data);
	this->nota = s.nota;
}

char* Examen::getNume() {
	return this->nume;
}

char* Examen::getData() {
	return this->data;
}

int Examen::getNota() {
	return this->nota;
}

void Examen::setNume(char* nume) {
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
}

void Examen::setData(char* data) {
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, 1 + strlen(data), data);
}

void Examen::setNota(int nota) {
	this->nota = nota;
}

Examen& Examen::operator=(const Examen& s) {
	this->setNume(s.nume);
	this->setData(s.data);
	this->setNota(s.nota);
	return *this;
}

bool Examen:: operator==(const Examen& s) {			
	return (this->nota == s.nota) && (strcmp(this->data, s.data) == 0) && (strcmp(this->nume, s.nume) == 0);
}

ostream& operator<<(ostream& os, const Examen& s)	
{
	os << " <> Nume: " << s.nume << " <> Data: " << s.data << " <> Nota: " << s.nota;
	return os;
}
