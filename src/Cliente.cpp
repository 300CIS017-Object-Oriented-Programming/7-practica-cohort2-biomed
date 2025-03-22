//
// Created by Asus on 18/03/2025.
//

#include "Cliente.h"
#include "Venta.h"

Cliente::Cliente(int idCliente, std::string nombre) {
    this->idCliente = idCliente;
    this->nombre = nombre;
}

int Cliente::getId() {
    return this->idCliente;
}

void Cliente::mostrarInfo() {
    std::cout << "Cliente: " << this->nombre << std::endl;
    std::cout << "Id: " << this->idCliente << std::endl;

}

void Cliente::mostrarHistorialCompras() {
    for (int i=0;i<compras.size();i++) {
        compras[i].mostrarDetallesVenta();
    }

}

void Cliente::agregarVenta(Venta *venta) {
    compras.push_back(venta);

}
