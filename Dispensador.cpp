//
// Created by maxco on 12/3/2025.
//

#include "Dispensador.h"
using namespace std;

bool Dispensador::verificarStock(Producto* p) {
    if (inventario.find(p) != inventario.end()) {
        return inventario[p] > 0;
    }
    return false;
}

bool Dispensador::dispensarProducto(Producto* p) {
    if (verificarStock(p)) {
        inventario[p]--;
        return true;
    }
    return false;
}

void Dispensador::agregarProducto(Producto* p, int c) {
    if (inventario.find(p) != inventario.end()) {
        inventario[p] += c;
    } else {
        inventario[p] = c;
    }
}