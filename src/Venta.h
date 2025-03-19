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
    public:
    Venta();
    Venta(int idVenta, Cliente* cliente);
    ~Venta();
    void mostrarInfo();
    int calcularTotalVenta();


};



#endif //VENTA_H
