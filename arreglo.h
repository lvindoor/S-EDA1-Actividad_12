#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

class Arreglo {
private:
    std::string *arreglo; // arreglo de enteros
    size_t tam; // tamaño
    size_t cont; // contador
    const static size_t TAM_MAX = 5; // total arreglo

    void expandir(); // expande arreglo

public:
    Arreglo(); // constructor
    ~Arreglo(); // destructor
    size_t size(); // trae tamaño arreglo

    /* Inserciones al arreglo */
    void insertarInicio(const std::string&);
    void insertarFinal(const std::string&);

    /* Operadores logicos */
    std::string operator[](size_t p) {
        return arreglo[p];
    }

};

#endif