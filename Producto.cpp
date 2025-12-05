//
// Created by maxco on 12/3/2025.
//

#include "Producto.h"

Producto::Producto() : nombre(""), precio(0.0) {}

Producto::Producto(string n, double p) {
    nombre = n;
    precio = p;
}

string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}
