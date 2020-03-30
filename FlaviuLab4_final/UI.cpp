#include <iostream>
#include"UI.h"
using namespace std;

UI::UI() {
}

UI::~UI() {
}

void UI::Afisare() {
    Examen* examene = S.getAll();
    cout << endl;
    cout << "           < EXAMENE >" << endl;
    cout << endl;
    for (int i = 0; i < S.getSize(); i++) {
        cout << examene[i] << endl;
    }
}

void UI::showMenu() {
    cout << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "       < MENIU >" << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << endl;
    cout << "  0. Iesire" << endl;
    cout << "  1. Citire" << endl;
    cout << "  2. Afisare toate examenele" << endl;
    cout << "  3. Updatare" << endl;
    cout << "  4. Stergere" << endl;
    cout << "  5. Afisare examene cu nota mai mare decat cea data" << endl;
    cout << "  6. Bonus student" << endl;
    cout << endl;
}

void UI::Adaugare() {
    char nume[100];
    char data[100];
    int nota;
    cout << endl;
    cout << "       < ADAUGARE >" << endl;
    cout << endl;
    cout << "  -> Introduceti numele: ";
    cin >> nume;

    cout << "  -> Introduceti data: ";
    cin >> data;

    cout << "  -> Introduceti nota: ";
    cin >> nota;

    Examen e1(nume, data, nota);
    S.addExamen(e1);

    cout << endl;
    cout << "       Examen adaugat!" << endl;
}

void UI::Updatare() {
    Afisare();
    char nume_dat[100];
    char data_dat[100];
    int nota_dat;
    cout << endl;
    cout << "  -> Introduceti numele studentului: ";
    cin >> nume_dat;
    cout << "  -> Introduceti data examenului: ";
    cin >> data_dat;
    cout << " -> INtroduceti nota: ";
    cin >> nota_dat;
    Examen e(nume_dat, data_dat, nota_dat);
    int poz = S.GasesteExamen(e);
    char nume_nou[100];
    cout << "  -> Introduceti noul nume: ";
    cin >> nume_nou;
    char data_nou[100];
    cout << "  -> Introduceti noua data: ";
    cin >> data_nou;
    int nota_nou;
    cout << "  -> Introduceti noua nota: ";
    cin >> nota_nou;
    Examen e1(nume_nou, data_nou, nota_nou);
    S.updateExamen(poz, e1);
}

void UI::Stergere() {
    Afisare();
    cout << endl;
    char nume_sters[100];
    char data_sters[100];
    int nota_sters;
    cout << "       < STERGERE >" << endl;
    cout << endl;
    cout << "  -> Introduceti numele: ";
    cin >> nume_sters;
    cout << "  -> Introduceti data: ";
    cin >> data_sters;
    cout << "  -> Introduceti nota: ";
    cin >> nota_sters;
    Examen e(nume_sters, data_sters, nota_sters);
    S.deleteExamen(e);
    cout << endl;
    cout << "       Examen sters!" << endl;
}

void UI::Note() {
    int nota_m;
    cout << endl;
    cout << "          < NOTA MINIMA >" << endl;
    cout << endl;
    cout << "  -> Introduceti nota minima: ";
    cin >> nota_m;
    Examen* examene_nota = S.ExameneNota(nota_m);
    cout << endl;
    cout << "           < EXAMENE >" << endl;
    cout << endl;
    int note = S.getNote();
    for (int i = 0; i < note; i++) {
        cout << examene_nota[i] << endl;
    }
    S.NoteZero();
}

void UI::Bonus() {
    char copil[100];
    cout << endl;
    cout << "       < BONUS >" << endl;
    cout << endl;
    cout << "  -> Introduceti numele studentului: ";
    cin >> copil;
    S.Bonus(copil);
    cout << endl;
    cout << "       Bonus oferit!" << endl;
}

void UI::Undo() {
    cout << "Coming soon!  =) Farsa :))) Nu va mai veni niciodata." << endl;
}

void UI::Run(){
    int cmd;
    Repo repo;
    Service service;
    bool ok = false;
    while (!ok) {
        showMenu();
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "     ______________" << endl;
        cout << "    |      WHY     |" << endl;
        cout << "    |   DID  YOU   |" << endl;
        cout << "    |     WAKE     |" << endl;
        cout << "    |    ME UP ?   |" << endl;
        cout << "    |OMG I'M SLEEPY|" << endl;
        cout << "    |______________|" << endl;
        cout << " ( )__( ) ||" << endl;
        cout << "  (>.>)   ||" << endl;
        cout << " <(___)> " << endl;
        cout << "  () ()" << endl;
        cout << endl;
        cout << "  -> Introduceti optiunea: ";
        cin >> cmd;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        switch (cmd) {
        case(0): {ok = true; cout << endl;
            cout << "Pa, fa!   ~(-_-)~ ";
            cout << endl;
            break; }
        case(1): {Adaugare(); break; }
        case(2): {Afisare(); break; }
        case(3): {Updatare(); break; }
        case(4): {Stergere(); break; }
        case(5): {Note(); break; }
        case(6): {Bonus(); break; }
        case(7): {Undo(); break; }
        }
    }
}
