#include "MaquinaExpendedora.h"
#include <iostream>
using namespace std;

MaquinaExpendedora::MaquinaExpendedora(Dispensador* d) : dispensador(d) {}

void MaquinaExpendedora::insertarDinero(double cantidad) {
    monedero.ingresarDinero(cantidad);
}

void MaquinaExpendedora::seleccionarProducto(Producto* p) {
    if (!dispensador->verificarStock(p)) {
        cout << "Producto agotado o no existe.\n";
        return;
    }

    double saldo = monedero.getSaldoActual();
    if (monedero.validarDineroSuficiente(p->getPrecio(), saldo)) {
        finalizarCompra(p);
    } else {
        cout << "Dinero insuficiente. Faltan: $"
             << (p->getPrecio() - saldo) << "\n";
    }
}

void MaquinaExpendedora::finalizarCompra(Producto* p) {
    if(dispensador->dispensarProducto(p)) {
        double cambio = monedero.calcularCambio(p->getPrecio());
        cout << "Compra exitosa. Su cambio es: $" << cambio << "\n";
    }
}
double MaquinaExpendedora::consultarSaldo() const {
    return monedero.getSaldoActual();
}