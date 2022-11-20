// En este archivo se definen las funciones que se usan en el programa.

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

#include "Raza.h"
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
    std::cout << "Bienvenido a D&D" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Crear personaje" << std::endl;
    std::cout << "2. Jugar partida" << std::endl;
    std::cout << "3. Salir" << std::endl;
}

// Funcion para mostrar las opciones de alineamiento

void mostrarAlineamientos()
{
    std::cout << "1. Legal Bueno" << std::endl;
    std::cout << "2. Neutral Bueno" << std::endl;
    std::cout << "3. Caotico Bueno" << std::endl;
    std::cout << "4. Legal Neutral" << std::endl;
    std::cout << "5. Neutral" << std::endl;
    std::cout << "6. Caotico Neutral" << std::endl;
    std::cout << "7. Legal Malo" << std::endl;
    std::cout << "8. Neutral Malo" << std::endl;
    std::cout << "9. Caotico Malo" << std::endl;
}

// Funcion para crear un personaje

Personaje crearPersonaje()
{
    Personaje personaje;
    Raza *razas = inicializarRazas();

    std::string nombre, genero, alineamiento;
    int edad, opcion;
    Raza raza;
    Estadisticas estadisticas;

    limpiarPantalla();

    std::cout << "Creacion de personaje" << std::endl;
    std::cout << std::endl;

    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << std::endl;
    personaje.setNombre(nombre);

    std::cout << "Genero: " << std::endl;
    std::cout << "1. Masculino" << std::endl;
    std::cout << "2. Femenino" << std::endl;
    std::cout << "3. Otro" << std::endl;
    std::cin >> opcion;
    do
    {
        switch (opcion)
        {
        case 1:
            genero = "Masculino";
            break;
        case 2:
            genero = "Femenino";
            break;
        case 3:
            genero = "Otro";
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            std::cout << "Genero: ";
            std::cin >> opcion;
            break;
        }
    } while (opcion < 1 || opcion > 3);
    std::cout << std::endl;
    personaje.setGenero(genero);

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
    mostrarAlineamientos();
    std::cin >> opcion;
    do
    {
        switch (opcion)
        {
        case 1:
            alineamiento = "Legal Bueno";
            break;
        case 2:
            alineamiento = "Neutral Bueno";
            break;
        case 3:
            alineamiento = "Caotico Bueno";
            break;
        case 4:
            alineamiento = "Legal Neutral";
            break;
        case 5:
            alineamiento = "Neutral";
            break;
        case 6:
            alineamiento = "Caotico Neutral";
            break;
        case 7:
            alineamiento = "Legal Malo";
            break;
        case 8:
            alineamiento = "Neutral Malo";
            break;
        case 9:
            alineamiento = "Caotico Malo";
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            std::cout << "Alineamiento: ";
            std::cin >> opcion;
            break;
        }
    } while (opcion < 1 || opcion > 9);
    std::cout << std::endl;
    personaje.setAlineamiento(alineamiento);

    std::cout << "Raza: " << std::endl;
    mostrarRazas(razas);
    std::cin >> opcion;
    std::cout << std::endl;
    personaje.setRaza(razas[opcion - 1]);

    std::cout << "Estadisticas: " << std::endl;
    std::cout << "Las estadisticas se generan aleatoriamente" << std::endl;
    estadisticas = Estadisticas(personaje.getRaza());
    personaje.setEstadisticas(estadisticas);

    return personaje;
}

#endif