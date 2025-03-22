//
// Created by Asus on 18/03/2025.
//

#include "Tienda.h"
#include "Producto.h"
void Tienda::mostrarVentas() {
    for (int i=0;i<ventas.size();i++) {
        ventas[i]->mostrarDetallesVenta();
    }
}

void Tienda::mostrarListaProductos() {
    for (int i = 0; i < productos.size(); i++) {
        productos[i]->mostrarInfo();
    }
}

void Tienda::registrarVenta(int idCliente) {

    /*crear un metodo para buscar cliente nuevo
     *para este metodo se necesita crear una venta, luego seleccionar los productos que el cliente quiere comprar y agregarlos a la venta
     */

}

//float Tienda::calcularTotalInv() {}

void Tienda::mostrarListaClientes() {
    for (int i = 0; i < clientes.size(); i++) {
        clientes[i]->mostrarInfo();
    }
}

void Tienda::reabastecerProducto(int codigoProducto, int cantidad) {

    }

void Tienda::agregarProducto(int codigo, std::string nombre, int precio, int stock) {
    productos.push_back(new Producto(codigo, nombre, precio, stock));
}

Tienda::~Tienda() {
    for (int i = 0; i < productos.size(); i++) {
        delete productos[i];
    }
    productos.clear();
}





