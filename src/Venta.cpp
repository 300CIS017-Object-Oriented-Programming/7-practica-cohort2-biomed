//
// Created by Asus on 18/03/2025.
//

#include "Venta.h"

Venta::Venta(int idVenta, Cliente* cliente) {
    this->idVenta = idVenta;
    this->cliente = cliente;
}

void Venta::mostrarDetallesVenta() {
    std::cout << std::endl;
    std::cout << "ID venta: " << idVenta << std::endl;
    cliente->mostrarInfo();
    for (int i=0; i < productos.size(); i++) {
        productos[i]->mostrarInfo();
    }

}

int Venta::calcularTotalVenta() {
    int total = 0;
    for (int i=0; i < productos.size(); i++) {
        int cantidad =0;
        std::cout << "Cuántas unidades del producto con código " << productos[i]->getCodigoProducto() << " se compraron? " << std::endl;
        std::cin>>cantidad;
        total+=(productos[i]->getPrecio())*cantidad;

    }std::cout << "El total de la venta es de: $" << std::endl;
    return total;
}

void Venta::agregarProductoVendido(Producto* producto,int cantidad) {
     productos.push_back(producto);
     producto->descontarStock(cantidad);
     std::cout << "Producto agregado a la venta de forma exiosa!" << std::endl;

}

void Venta::setCliente(Cliente* cliente) {
    this->cliente = cliente;
}

int Venta::getIdVenta() {
    return idVenta;
}
