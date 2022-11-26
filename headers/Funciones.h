// En este archivo se definen las funciones que se usan en el programa.

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

#include "Raza.h"
#include "Clase.h"
#include "Estadisticas.h"
#include "Personaje.h"

// Funciones

// Funciones generales

void limpiarPantalla()
{
    system("cls");
}

void pausa()
{
    system("pause");
}

int tirarDado()
{
    return rand() % 20 + 1;
}

// Funciones de menu

void menuPrincipal()
{
    limpiarPantalla();
    std::cout << "Bienvenido al creador de personajes de D&D" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Crear personaje" << std::endl;
    std::cout << "2. Mostrar personaje" << std::endl;
    std::cout << "3. Salir" << std::endl;
}

// Funcion para crear un personaje

void crearPersonaje(Personaje &personaje)
{
    std::string nombre, genero, alineamiento;
    int edad, opcion;
    Raza raza;

    limpiarPantalla();

    std::cout << "Creacion de personaje" << std::endl;
    std::cout << std::endl;

    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << std::endl;
    personaje.setNombre(nombre);

    std::cout << "Genero: " << std::endl;
    mostrarGeneros(inicializarGeneros(), 3);
    std::cin >> opcion;
    while (opcion < 1 || opcion > 3) {
        std::cout << "Opcion no valida" << std::endl;
        std::cin >> opcion;
    }
    std::cout << std::endl;
    personaje.setGenero(inicializarGeneros()[opcion - 1]);

    std::cout << "Edad: ";
    std::cin >> edad;
    while (edad < 0)
    {
        std::cout << "Edad no valida" << std::endl;
        std::cout << "Edad: ";
        std::cin >> edad;
    }
    std::cout << std::endl;
    personaje.setEdad(edad);

    std::cout << "Alineamiento: " << std::endl;
    mostrarAlineamientos(inicializarAlineamientos(), 9);
    std::cin >> opcion;
    while (opcion < 1 || opcion > 9)
    {
        std::cout << "Opcion no valida" << std::endl;
        std::cout << "Alineamiento: ";
        std::cin >> opcion;
    }
    std::cout << std::endl;
    personaje.setAlineamiento(inicializarAlineamientos()[opcion - 1]);

    std::cout << "Raza: " << std::endl;
    mostrarRazas(inicializarRazas(), 9);
    std::cin >> opcion;
    while (opcion < 1 || opcion > 9)
    {
        std::cout << "Opcion no valida" << std::endl;
        std::cout << "Raza: ";
        std::cin >> opcion;
    }
    std::cout << std::endl;
    personaje.definirRaza(inicializarRazas(), opcion - 1);

    std::cout << "Clase: " << std::endl;
    mostrarClases(inicializarClases(), 9);
    std::cin >> opcion;
    while (opcion < 1 || opcion > 9)
    {
        std::cout << "Opcion no valida" << std::endl;
        std::cout << "Clase: ";
        std::cin >> opcion;
    }
    std::cout << std::endl;
    personaje.definirClase(inicializarClases(), opcion - 1);

    std::cout << "Estadisticas: " << std::endl;
    std::cout << "Las estadisticas se generan aleatoriamente" << std::endl;
    personaje.definirEstadisticas(personaje.getRaza());
    std::cout << std::endl;

    return;
}

#endif