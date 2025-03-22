cmake_minimum_required(VERSION 3.19)
project(POOSistemaGestionVentas)

set(CMAKE_CXX_STANDARD 20)

add_executable(POOSistemaGestionVentas main.cpp
        src/Cliente.cpp
        src/Cliente.h
        src/Tienda.cpp
        src/Tienda.h
        src/Producto.cpp
        src/Producto.h
        src/Venta.cpp
        src/Venta.h)