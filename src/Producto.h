//
// Created by Asus on 18/03/2025.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include<iostream>

class Producto {
private:
    int codigoProducto;
    std::string nombre;
    int precio;
    int stock;
public:
    Producto()=default;
    Producto(int codigoProducto, std::string nombre, int precio, int stock);
    void mostrarInfo();
    int getCodigoProducto();
    int getStock();
    int getPrecio();
    void agregarStock(int cantidad);
    void descontarStock(int cantidad);

};



#endif //PRODUCTO_H
