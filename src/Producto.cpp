//
// Created by Asus on 18/03/2025.
//

#include "Producto.h"

Producto::Producto(int codigoProducto, std::string nombre, int precio, int stock) {
    this->codigoProducto = codigoProducto;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
}

void Producto::mostrarInfo() {
    std::cout << "La siguiente es la información del producto solicitado: \n" << std::endl;
    std::cout << "Codigo: " << this->codigoProducto <<std::endl;
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Precio: " << this->precio << std::endl;
    std::cout << "Stock: " << this->stock << std::endl;
}

int Producto::getCodigoProducto() {
    return this->codigoProducto;
}

int Producto::getStock() {
    return this->stock;
}

int Producto::getPrecio() {
    return this->precio;
}

void Producto::agregarStock(int cantidad) {
    this->stock += cantidad;
}

void Producto::descontarStock(int cantidad) {
    if (this->stock >= cantidad) {
        this->stock -= cantidad;
    }
}
