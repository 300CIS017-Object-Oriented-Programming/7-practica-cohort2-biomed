//
// Created by Asus on 18/03/2025.
//

#ifndef TIENDA_H
#define TIENDA_H
#include <vector>

#include "Cliente.h"
#include "Producto.h"
#include "Venta.h"


class Tienda {
private:
    std::vector<Producto> productos;
    std::vector<Cliente>clientes;
    std::vector<Venta>ventas;
public:
    Tienda();
    //virtual ~Tienda();
    void mostrarVentas();
    void mostrarListaProductos();
    void registrarVenta(int idCliente);
    float calcularTotalInv();
    void mostrarListaClientes();
    void reabastecerProducto(int codigoProducto, int cantidad);


};



#endif //TIENDA_H
