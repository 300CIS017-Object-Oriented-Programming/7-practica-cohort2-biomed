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

}

void Tienda::registrarVenta(int idCliente) {

}

//float Tienda::calcularTotalInv() {}

void Tienda::mostrarListaClientes() {

}

void Tienda::reabastecerProducto(std::string codigoProducto, int cantidad) {
}
