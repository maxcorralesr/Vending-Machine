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
    map<string, int> inventario;

public:
    bool verificarStock(const Producto& p);
    bool dispensarProducto(const Producto& p);
    void agregarProducto(const Producto& p, int c);
};

#endif //UNTITLED7_DISPENSADOR_H
