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
    cout << "5. Consultar Saldo Actual (Cliente)\n";
    cout << "6. Ver Ganancias (Admin)\n";
    cout << "9. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    Producto coca("Coca Cola", 15.0);
    Producto papas("Sabritas", 20.0);
    Producto agua("Agua", 10.0);

    Dispensador miDispensador;
    miDispensador.agregarProducto(coca, 5);
    miDispensador.agregarProducto(papas, 3);
    miDispensador.agregarProducto(agua, 5);

    
    MaquinaExpendedora maquina(miDispensador);

    int opcion = 0;
    double monto = 0.0;

    while(opcion != 9) {
        mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese cantidad a insertar: $";
                cin >> monto;
                maquina.insertarDinero(monto);
                break;

            case 2:
                maquina.seleccionarProducto(coca);
                break;

            case 3:
                maquina.seleccionarProducto(papas);
                break;

            case 4:
                maquina.seleccionarProducto(agua);
                break;

            case 5:
                cout << "Su saldo actual es: $" << maquina.consultarSaldo() << "\n";
                break;

            case 6:
                maquina.mostrarGanancias();
                break;

            case 9:
                cout << "Gracias por usar la maquina.\n";
                break;

            default:
                cout << "Opcion no valida.\n";
        }
    }

    return 0;
}
