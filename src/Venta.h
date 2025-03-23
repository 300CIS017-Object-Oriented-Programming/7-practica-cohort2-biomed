//
// Created by Asus on 18/03/2025.
//

#ifndef VENTA_H
#define VENTA_H
#include "Cliente.h"
#include "Producto.h"


class Venta {
private:
    int idVenta;
    Cliente* cliente;
    std::vector<Producto*> productos;
    int totalVenta;
public:
    Venta();
    Venta(int idVenta, Cliente* cliente);
    void mostrarDetallesVenta();
    int calcularTotalVenta();
    void agregarProductoVendido(Producto* producto, int cantidad);
    void setCliente(Cliente *cliente);
    int getIdVenta();

};

#endif //VENTA_H
