//
// Created by maxco on 12/3/2025.
//

#include "Dispensador.h"

bool Dispensador::verificarStock(const Producto& p) {
    string nombre = p.getNombre();
    // count() devuelve 1 si la clave existe 0 si no entonces validamos si es mayor a 0 si no pues da false y si si da true.
    if (inventario.count(nombre)) {
        return inventario[nombre] > 0;
    }
    return false;
}

bool Dispensador::dispensarProducto(const Producto& p) {
    if (verificarStock(p)) {
        string nombre = p.getNombre();
        inventario[nombre]--;
        return true;
    }
    return false;
}

void Dispensador::agregarProducto(const Producto& p, int c) {
    string nombre = p.getNombre();
    inventario[nombre] += c;
}
