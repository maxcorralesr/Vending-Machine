#ifndef MONEDERO_H
#define MONEDERO_H

class Monedero {
private:
    double saldoActual;
    double dineroTotal;

public:
    Monedero();
    void ingresarDinero(double cantidad);
    double calcularCambio(double costo);
    bool validarDineroSuficiente(double costo, double ingresado);
    double getSaldoActual() const;
};

#endif