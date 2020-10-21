#include <iostream>
#include "arreglo.h"

using namespace std;

int main() {

    Arreglo arreglo;

    /* Insertar 8 elementos al final */
    arreglo.insertarFinal("cC");
    arreglo.insertarFinal("dD");
    arreglo.insertarFinal("eE");
    arreglo.insertarFinal("fF");
    arreglo.insertarFinal("gG");
    arreglo.insertarFinal("hH");
    arreglo.insertarFinal("iI");
    arreglo.insertarFinal("jJ");
    

    /* Mostramos arreglo */
    cout << "Inserciones al final:" << endl;
    for(size_t i=0;i<arreglo.size();i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    /* Insertar 2 elementos al inicio */
    arreglo.insertarInicio("bB");
    arreglo.insertarInicio("aA");

    /* Mostramos arreglo */
    cout << "Inserciones al inicio:" << endl;
    for(size_t i=0;i<arreglo.size();i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}