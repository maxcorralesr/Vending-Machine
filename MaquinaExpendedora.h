#ifndef MAQUINAEXPENDEDORA_H
#define MAQUINAEXPENDEDORA_H

#include "Dispensador.h"
#include "Monedero.h"
#include "Producto.h"

class MaquinaExpendedora {
private:
    Dispensador* dispensador;
    Monedero monedero;

public:
    MaquinaExpendedora(Dispensador* d);

    void insertarDinero(double cantidad);
    void seleccionarProducto(Producto* p);
    void finalizarCompra(Producto* p);
    double consultarSaldo() const;
};

#endif