#include <iostream>
#include "Producto.h"
#include "Dispensador.h"
#include "MaquinaExpendedora.h"

using namespace std;

void mostrarMenu() {
    cout << "\n=== MAQUINA EXPENDEDORA ===\n";
    cout << "1. Insertar Dinero\n";
    cout << "2. Comprar Coca Cola ($15.0)\n";
    cout << "3. Comprar Sabritas ($20.0)\n";
    cout << "4. Comprar Agua ($10.0)\n";
    cout << "5. Consultar Saldo Actual\n";
    cout << "9. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    // 1. CONFIGURACIÓN INICIAL (Invisible para el usuario)
    Producto coca("Coca Cola", 15.0);
    Producto papas("Sabritas", 20.0);
    Producto agua("Agua", 10.0);

    Dispensador miDispensador;
    // Llenamos la máquina usando punteros (&)
    miDispensador.agregarProducto(&coca, 5);
    miDispensador.agregarProducto(&papas, 3);
    miDispensador.agregarProducto(&agua, 5);

    MaquinaExpendedora maquina(&miDispensador);

    // 2. CICLO DEL MENU
    int opcion = 0;
    double monto = 0.0;

    while(opcion != 9) {
        mostrarMenu();
        cin >> opcion; // Leemos la opción del usuario

        switch(opcion) {
            case 1:
                cout << "Ingrese cantidad a insertar: $";
                cin >> monto;
                maquina.insertarDinero(monto);
                break;

            case 2:
                // El usuario quiere Coca, pasamos la dirección de memoria de la coca
                cout << "Intentando comprar Coca Cola...\n";
                maquina.seleccionarProducto(&coca);
                break;

            case 3:
                cout << "Intentando comprar Sabritas...\n";
                maquina.seleccionarProducto(&papas);
                break;

            case 4:
                cout << "Intentando comprar Agua...\n";
                maquina.seleccionarProducto(&agua);
                break;

            case 5:
                // Nota: Tu clase MaquinaExpendedora necesita este método público
                // Si no lo tienes, puedes agregarlo o quitar esta opción.
                cout << "Saldo actual en maquina: $" << maquina.consultarSaldo() << "\n";
                break;

            case 9:
                cout << "Gracias por su compra. Saliendo...\n";
                break;

            default:
                cout << "Opcion no valida, intente de nuevo.\n";
        }
    }

    return 0;
}