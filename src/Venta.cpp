//
// Created by Asus on 18/03/2025.
//

#include "Venta.h"

Venta::Venta(int idVenta, Cliente cliente) {
    this->idVenta = idVenta;
    this->cliente = cliente;
}

void Venta::mostrarDetallesVenta() {
    std::cout << "Venta: " << idVenta << std::endl;
    cliente.mostrarInfo();
    for (int i=0; i < productos.size(); i++) {
        productos[i].mostrarInfo();
    }
}

int Venta::calcularTotalVenta() {
    int total = 0;
    for (int i=0; i < productos.size(); i++) {
        total+=productos[i].getPrecio();
    }
    return total;
}

void Venta::agregarProductoVendido(Producto producto, int cantidad) {
    //preguntar
}
