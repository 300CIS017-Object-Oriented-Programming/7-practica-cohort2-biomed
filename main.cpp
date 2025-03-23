#include <iostream>
#include "src/Tienda.h"

void mostrarMenu() {
    std::cout << "\n----- MENU TIENDA -----" << std::endl;
    std::cout << "1. Agregar productos" << std::endl;
    std::cout << "2. Mostrar Lista de Productos" << std::endl;
    std::cout << "3. Registrar Ventas" << std::endl;
    std::cout << "4. Mostrar Ventas" << std::endl;
    std::cout << "5. Mostrar Lista de Clientes" << std::endl;
    std::cout << "6. Reabastecer Producto" << std::endl;
    std::cout << "7. Calcular total del inventario" << std::endl;
    std::cout << "0. Salir" << std::endl;
    std::cout << "Seleccione una opcion: ";
}

int main() {
    Tienda miTienda;
    int opcion;

    do {
        mostrarMenu();
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) {
            case 1: {
                int codigo, precio, stock;
                std::string nombre;
                std::cout << "Ingrese el codigo del producto: ";
                std::cin >> codigo;
                std::cin.ignore();
                std::cout << "Ingrese el nombre del producto: ";
                std::getline(std::cin, nombre);
                std::cout << "Ingrese el precio del producto: ";
                std::cin >> precio;
                std::cout << "Ingrese Stock del producto: ";
                std::cin >> stock;
                miTienda.agregarProducto(codigo, nombre, precio, stock);
                std::cout << "Producto agregado exitosamente.\n";
                break;
            }
            case 2:
                std::cout << "\nLista de productos en la tienda:\n";
                miTienda.mostrarListaProductos();
                break;
            case 3: {
                int idCliente;
                std::cout << "Ingrese ID del Cliente: ";
                std::cin >> idCliente;
                miTienda.registrarVenta(idCliente);
                std::cout << "Venta Registrada.\n";
                break;
            }
            case 4:
                std::cout << "\nLista de Ventas:\n";
                miTienda.mostrarVentas();
                break;
            case 5:
                std::cout << "\nLista de Clientes:\n";
                miTienda.mostrarListaClientes();
                break;
            case 6: {
                int codigoProduto, cantidad;
                std::cout << "Ingrese el codigo del producto a reabastecer:";
                std::cin >> codigoProduto;
                std::cout << "Ingrese la cantidad a agregar:";
                std::cin >> cantidad;
                miTienda.reabastecerProducto(codigoProduto, cantidad);
                std::cout << "Producto Reabastecido correctamente.\n";
                break;
            }
            case 7:
                std::cout << "\nCalculo del total del inventario:\n";
                std::cout << "El total del inventario de la tienda es de: $" << std::endl;
                miTienda.calcularTotalInv();
            break;

            case 0:
                std::cout << "Saliendo del Programa...\n";
                break;
            default:
                std::cout << "Opcion no valida!\n";
                break;
        }
    } while (opcion != 7);

    return 0;
}




