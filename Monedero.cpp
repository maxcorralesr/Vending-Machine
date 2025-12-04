#include "Monedero.h"
#include <iostream>
using namespace std;

Monedero::Monedero() : saldoActual(0.0), dineroTotal(0.0) {}

void Monedero::ingresarDinero(double cantidad) {
    if (cantidad > 0) {
        saldoActual += cantidad;
        cout << "Ingresados: $" << cantidad << ". Saldo actual: $" << saldoActual << "\n";
    }
}

double Monedero::calcularCambio(double costo) {
    double cambio = saldoActual - costo;
    dineroTotal += costo;
    saldoActual = 0;
    return cambio;
}

bool Monedero::validarDineroSuficiente(double costo, double ingresado) {
    return ingresado >= costo;
}

double Monedero::getSaldoActual() const {
    return saldoActual;
}