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
    for (int i=0;i<clientes.size();i++) {
        if (idCliente == clientes[i].getId()) {
            //pendiente
            //metodo buscar cliente nuevo
            //crear venta, que productos quiere el cliente, agregarlos

        }else {
            std::cout<<"No existe cliente con ese número de identificación"<<std::endl;
        }
    }
}

//float Tienda::calcularTotalInv() {}

void Tienda::mostrarListaClientes() {
    for (int i=0;i<clientes.size();i++) {
        clientes[i].mostrarInfo();
    }
}
void Tienda::reabastecerProducto(int codigoProducto, int cantidad) {
    for (int i=0;i<productos.size();i++) {
        if (codigoProducto == productos[i].getCodigoProducto()) {
            productos[i].agregarStock(cantidad);
        }
    }
}
