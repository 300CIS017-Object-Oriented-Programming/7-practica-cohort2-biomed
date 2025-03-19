//
// Created by Asus on 18/03/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <iostream>
#include <vector>
#include "Venta.h"

class Cliente {
private:
    int id;
    std::string nombre;
    std::vector<Venta > compras;
public:
    Cliente()=default;
    Cliente(int id,std::string nombre);
    virtual ~Cliente();
    int getId();
    void mostrarInfo();
    void mostrarHistorialCompras();
    void agregarVenta(Venta venta);

};



#endif //CLIENTE_H
