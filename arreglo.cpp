#include "arreglo.h"

using namespace  std;

void Arreglo::expandir() {
    string *nuevo = new string[tam+TAM_MAX];
    /* Respaldamos al nuevo arreglo */
    for(size_t i=0;i<cont;i++) {
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo; // borramos el arreglo viejo
    arreglo = nuevo; // copia direcciones de memoria
    tam+=TAM_MAX; // duplicamos tamaño
}

Arreglo::Arreglo() {
    arreglo = new string[TAM_MAX];
    cont = 0;
    tam = TAM_MAX; 
}

Arreglo::~Arreglo() {
    delete[] arreglo;
}

void Arreglo::insertarInicio(const string &s) {
    if(cont==tam) { // ¿Esta lleno?
       expandir(); // expandimos arreglo 
    }

    /* Insertamos al inicio */
    for(size_t i=cont;i>0;i--) { // movemos arreglo
        arreglo[i] = arreglo[i-1]; // hacia derecha
    }
    arreglo[0] = s;
    cont++;
}

void Arreglo::insertarFinal(const string &s) {
    if(cont==tam) { // ¿Esta lleno?
       expandir(); // expandimos arreglo 
    }
    /* Insertamos al final */
    arreglo[cont] = s; 
    cont++;
}

size_t Arreglo::size() {
    return cont; // Elementos del arreglo
}