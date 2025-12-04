//
// Created by maxco on 12/3/2025.
//

#ifndef UNTITLED7_DISPENSADOR_H
#define UNTITLED7_DISPENSADOR_H


#include "Producto.h"
#include <map>
using namespace std;

class Dispensador {
private:
    map<Producto*, int> inventario;

public:
    bool verificarStock(Producto* p);
    bool dispensarProducto(Producto* p);
    void agregarProducto(Producto* p, int c);
};

#endif //UNTITLED7_DISPENSADOR_H