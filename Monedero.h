#ifndef MONEDERO_H
#define MONEDERO_H

class Monedero {
private:
    double saldoActual; // Dinero del cliente
    double dineroTotal; // Ganancias de la máquina

public:
    Monedero();
    void ingresarDinero(double cantidad);
    double calcularCambio(double costo);
    bool validarDineroSuficiente(double costo, double ingresado);
    double getSaldoActual() const;
    double getDineroTotal() const; // Agregué este getter para poder ver las ganancias
};

#endif
