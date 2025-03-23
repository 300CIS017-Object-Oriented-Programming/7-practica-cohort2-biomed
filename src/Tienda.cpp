//
// Created by Asus on 18/03/2025.
//
#include "Tienda.h"
#include "Producto.h"


void Tienda::inicializarDatos() {
    Cliente *cliente1 = new Cliente(1001,"Santiago");
    Cliente *cliente2 = new Cliente(1002,"Camilo");
    Cliente *cliente3 = new Cliente(1003,"Sofia");
    Producto *producto1 = new Producto(1, "Tomate", 2500, 100);
    Producto *producto2 = new Producto(2,"Zanahoria",3000, 100);
    Producto *producto3 = new Producto(3,"Brocoli",4000,100);
    Producto *producto4 = new Producto(4,"Aguacate",6000,100);
    Producto *producto5 = new Producto(3,"Cebolla",3200,100);
    Producto *producto6 = new Producto(4,"Naranja",2000,100);
    Venta *venta1 = new Venta(32,nullptr);
    Venta *venta2 = new Venta(33,nullptr);
    Venta *venta3 = new Venta(34,nullptr);

    // Incluir los productos en el vector

    productos.push_back(producto1);
    productos.push_back(producto2);
    productos.push_back(producto3);
    productos.push_back(producto4);
    productos.push_back(producto5);
    productos.push_back(producto6);

    // Incluir las ventas en el vector y determinar los clientes correspondientes y productos
    venta1->setCliente(cliente1);
    venta2->setCliente(cliente2);
    venta1->agregarProductoVendido(producto1,15);
    venta1->agregarProductoVendido(producto2,15);
    venta2->agregarProductoVendido(producto3,20);
    venta2->agregarProductoVendido(producto6,30);
    venta3->agregarProductoVendido(producto5,40);
    venta3->agregarProductoVendido(producto4,10);

    ventas.push_back(venta1);
    ventas.push_back(venta2);
    ventas.push_back(venta3);

    // Incluir los clientes en el vector y determinar las ventas correspondientes
    cliente1->agregarVenta(venta1);
    cliente2->agregarVenta(venta2);
    cliente2->agregarVenta(venta3);

    clientes.push_back(cliente1);
    clientes.push_back(cliente2);
    clientes.push_back(cliente3);

}

Tienda::Tienda() {
    std::cout<<"Iniciando Tienda";
    inicializarDatos();
    std::cout<<"Tienda inicializada";
}


void Tienda::mostrarVentas() {
    for (int i=0;i<ventas.size();i++) {
        ventas[i]->mostrarDetallesVenta();
    }
}

void Tienda::mostrarListaProductos() {
    for (int i = 0; i < productos.size(); i++) {
        productos[i]->mostrarInfo();
    }
}

void Tienda::registrarVenta(int idCliente) {

    int idVenta = 0;
    std::cout<< "Digite el número de identificación de la nueva venta: "<<std::endl;
    std::cin >> idVenta;
    int bandera=0;
    for (int i=0;i<ventas.size();i++) {
        if (idVenta >= 0) {
            if (idVenta == ventas[i]->getIdVenta()) {
                bandera++;
            }
        }

    }
    if (bandera==0) {
        for (int i=0;i<clientes.size();i++) {
            if (idCliente==clientes[i]->getId()) {
                Venta *ventaNueva= new Venta(idVenta,clientes[i]);
                clientes[i]->agregarVenta(ventaNueva);
                int bandera1=0;

                do {
                    int opcion=0;
                    std::cout << "\n-----POR FAVOR SELECCIONE UNA OPCION PARA COMPLETAR LA CREACION DE LA VENTA-----" << std::endl;
                    std::cout << "1. Agregar producto a la venta" << std::endl;
                    std::cout << "2. Terminar creaciond de venta " << std::endl;
                    std::cin >> opcion;

                    switch (opcion) {

                        case 1: {

                            int idProducto = 0;
                            std::cout << "Por favor digite el código del producto que desea agregar a la venta: "<<std::endl;
                            std::cin >> idProducto;

                            for (int i=0;i<productos.size();i++) {

                                if (idProducto == productos[i]->getCodigoProducto()) {
                                    int cantProducto =0;
                                    std::cout << "Por favor digite cuántas unidades del producto se desean agregar a la venta: "<<std::endl;
                                    std::cin >> cantProducto;
                                    ventaNueva->agregarProductoVendido(productos[i],cantProducto);
                                }
                            }

                        }
                        case 2:
                            ventaNueva->mostrarDetallesVenta();
                            ventas.push_back(ventaNueva);

                            std::cout << "Venta agregada al inventario de forma exitosa!!" <<std::endl;
                            bandera1++;

                    }
                }while (bandera1 == 0);

            }
        }

    }





    /*crear un metodo para buscar cliente nuevo
     *para este metodo se necesita crear una venta, luego seleccionar los productos que el cliente quiere comprar y agregarlos a la venta
     */

}

int Tienda::calcularTotalInv() {
    int total = 0;
    for (int i = 0; i < productos.size(); i++) {
        int stockProducto=0;
        stockProducto = (productos[i]->getStock())*(productos[i]->getPrecio());
        total += stockProducto;
    }
    return total;

}

void Tienda::mostrarListaClientes() {
    for (int i = 0; i < clientes.size(); i++) {
        clientes[i]->mostrarInfo();
    }
}

void Tienda::reabastecerProducto(int codigoProducto, int cantidad) {
    for (int i = 0; i < productos.size(); i++) {
        if (productos[i]->getCodigoProducto() == codigoProducto) {
            productos[i]->agregarStock(cantidad);
            std::cout << "Ahora cuenta con " << productos[i]->getStock() << " unidades del producto." << std::endl;
        }
    }

    }

void Tienda::agregarProducto(int codigo, std::string nombre, int precio, int stock) {
    productos.push_back(new Producto(codigo, nombre, precio, stock));
}

Tienda::~Tienda() {
    for (int i = 0; i < productos.size(); i++) {
        delete productos[i];
    }
    for (int i = 0; i < ventas.size(); i++) {
        delete ventas[i];
    }
    for (int i = 0; i <clientes.size(); i++) {
        delete clientes[i];
    }

    productos.clear();
    ventas.clear();
    clientes.clear();
}







