//
// Created by maxco on 12/3/2025.
//

#ifndef UNTITLED7_PRODUCTO_H
#define UNTITLED7_PRODUCTO_H
#include <string>
using namespace std;

class Producto {
private:
    string nombre;
    double precio;

public:
    Producto();
    Producto(string n, double p);

    string getNombre() const;
    double getPrecio() const;
};


#endif //UNTITLED7_PRODUCTO_H
