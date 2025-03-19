//
// Created by Asus on 18/03/2025.
//

#include "Tienda.h"

void Tienda::mostrarVentas() {
    for (int i=0;i<ventas.size();i++) {
        ventas[i].mostrarDetallesVenta();
    }
}

void Tienda::mostrarListaProductos() {
       for (int i=0;i<productos.size();i++) {
           productos[i].mostrarInfo();
       }
}

void Tienda::registrarVenta(int idCliente) {


}

//float Tienda::calcularTotalInv() {}

void Tienda::mostrarListaClientes() {
    for (int i=0;i<clientes.size();i++) {
        clientes[i].mostrarInfo();
    }
}

void Tienda::reabastecerProducto(std::string codigoProducto, int cantidad) {
}
