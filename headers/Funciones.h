/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/**
 * En este archivo se encuentran funciones que se utilizan en el programa.
 */

#ifndef FUNCIONES_H // Si no esta definido el preprocesador FUNCIONES_H
#define FUNCIONES_H // Definir el preprocesador FUNCIONES_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings
#include <cstdlib> // Libreria para manejo de numeros aleatorios

#include "Inicializador.h" // Incluir el archivo Inicializador.h
#include "Raza.h" // Incluir la clase Raza
#include "Clase.h"  // Incluir la clase Clase
#include "Estadisticas.h" // Incluir la clase Estadisticas
#include "Personaje.h" // Incluir la clase Personaje

// Funciones

// Funciones generales

/**
 * Funcion para limpiar la pantalla
 * 
 * @param 
 * @return 
 */

void limpiarPantalla()
{
    system("cls");
}

/**
 * Funcion para pausar el programa
 * 
 * @param 
 * @return 
 */

void pausa()
{
    system("pause");
}

/**
 * Funcion para limpiar la pantalla y pausar el programa
 * 
 * @param 
 * @return 
 */

int tirarDado()
{
    return rand() % 20 + 1;
}

/**
 * Funcion para limpiar la pantalla y pausar el programa
 * 
 * @param
 * @return
 */

void crearPersonaje(Personaje &personaje)
{
    // Variables
    std::string nombre, genero, alineamiento;
    int edad, opcion;
    Raza raza;

    limpiarPantalla();

    // Pedir datos al usuario

    std::cout << "Creacion de personaje" << std::endl;
    std::cout << std::endl;

    // Nombre
    std::cout << "Nombre (Solo una palabra): ";
    std::cin >> nombre;
    std::cout << std::endl;
    personaje.setNombre(nombre);

    // Genero
    std::cout << "Genero: " << std::endl;
    mostrarGeneros(inicializarGeneros(), 3);
    std::cin >> opcion;
    while (opcion < 1 || opcion > 3)
    {
        std::cout << "Opcion no valida" << std::endl;
        std::cin >> opcion;
    }
    std::cout << std::endl;
    personaje.setGenero(inicializarGeneros()[opcion - 1]);

    // Edad
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

    // Alineamiento
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

    // Raza
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

    // Clase
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

    // Estadisticas
    std::cout << "Estadisticas: " << std::endl;
    std::cout << "Las estadisticas se generan aleatoriamente" << std::endl;
    personaje.definirEstadisticas(personaje.getRaza());
    std::cout << std::endl;

    return;
}

#endif // Cerrar el preprocesador FUNCIONES_H