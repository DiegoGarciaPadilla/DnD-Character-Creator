/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/**
 * En este archivo se encuentran funciones que se utilizan en el programa.
 */

#ifndef MENU_H // Si no esta definido el preprocesador MENU_H
#define MENU_H // Definir el preprocesador MENU_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

#include "Funciones.h" // Incluir el archivo Funciones.h
#include "Inicializador.h" // Incluir el archivo Inicializador.h
#include "Raza.h" // Incluir la clase Raza
#include "Clase.h" // Incluir la clase Clase
#include "Estadisticas.h" // Incluir la clase Estadisticas
#include "Personaje.h" // Incluir la clase Personaje

// Funciones

/**
 * Funcion para mostrar el menu principal
 * 
 * @param 
 * @return 
 */

void menuPrincipal()
{
    limpiarPantalla();
    std::cout << "Bienvenido al creador de personajes de D&D" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Crear personaje" << std::endl;
    std::cout << "2. Mostrar personaje" << std::endl;
    std::cout << "3. Enciclopedia de DnD" << std::endl;
    std::cout << "4. Salir" << std::endl;
}

/**
 * Funcion para mostrar el menu de enciclopedia de razas
 * 
 * @param 
 * @return 
 */

void menuRazas()
{
    int opcion;
    Raza *razas = inicializarRazas();

    do
    {
        limpiarPantalla();
        std::cout << "Bienvenido a la enciclopedia de razas de D&D" << std::endl;
        std::cout << std::endl;
        mostrarRazas(razas, 9);
        std::cout << "10. Volver" << std::endl;
        std::cout << "Escoge una opcion: ";
        std::cin >> opcion;

        while (opcion < 1 || opcion > 10)
        {
            std::cout << "Opcion no valida" << std::endl;
            std::cin >> opcion;
        }

        if (opcion != 10){
            limpiarPantalla();
            razas[opcion - 1].mostrarRaza();
            pausa();
        }

    } while (opcion != 10);

    delete[] razas;
}

/**
 * Funcion para mostrar el menu de enciclopedia de clases
 * 
 * @param 
 * @return 
 */


void menuClases()
{
    int opcion;
    Clase *clases = inicializarClases();

    do
    {
        limpiarPantalla();
        std::cout << "Bienvenido a la enciclopedia de clases de D&D" << std::endl;
        std::cout << std::endl;
        mostrarClases(clases, 9);
        std::cout << "10. Volver" << std::endl;
        std::cout << "Escoge una opcion: ";
        std::cin >> opcion;

        while (opcion < 1 || opcion > 10)
        {
            std::cout << "Opcion no valida" << std::endl;
            std::cin >> opcion;
        }

        if (opcion != 10)
        {
            limpiarPantalla();
            clases[opcion - 1].mostrarClase();
            pausa();
        }

    } while (opcion != 10);

    delete[] clases;
}

/**
 * Funcion para mostrar el menu de enciclopedia de armas
 * 
 * @param 
 * @return 
 */


void menuArmas()
{
    int opcion;
    Arma *armas = inicializarArmas();

    do
    {
        limpiarPantalla();
        std::cout << "Bienvenido a la enciclopedia de armas de D&D" << std::endl;
        std::cout << std::endl;
        mostrarArmas(armas, 9);
        std::cout << "10. Volver" << std::endl;
        std::cout << "Escoge una opcion: ";
        std::cin >> opcion;

        while (opcion < 1 || opcion > 10)
        {
            std::cout << "Opcion no valida" << std::endl;
            std::cin >> opcion;
        }

        if (opcion != 10)
        {
            limpiarPantalla();
            armas[opcion - 1].mostrarDatos();
            pausa();
        }

    } while (opcion != 10);

    delete[] armas;
}

/**
 * Funcion para mostrar el menu de enciclopedia de armaduras
 * 
 * @param 
 * @return 
 */


void menuArmaduras()
{
    int opcion;
    Armadura *armaduras = inicializarArmaduras();

    do
    {
        limpiarPantalla();
        std::cout << "Bienvenido a la enciclopedia de armaduras de D&D" << std::endl;
        std::cout << std::endl;
        mostrarArmaduras(armaduras, 9);
        std::cout << "10. Volver" << std::endl;
        std::cout << "Escoge una opcion: ";
        std::cin >> opcion;

        while (opcion < 1 || opcion > 10)
        {
            std::cout << "Opcion no valida" << std::endl;
            std::cin >> opcion;
        }

        if (opcion != 10)
        {
            limpiarPantalla();
            armaduras[opcion - 1].mostrarDatos();
            pausa();
        }

    } while (opcion != 10);

    delete[] armaduras;
}

/**
 * Funcion para mostrar el menu de enciclopedia
 * 
 * @param 
 * @return 
 */


void menuEnciclopedia()
{
    int opcion;

    do
    {
        limpiarPantalla();
        std::cout << "Bienvenido a la enciclopedia de D&D" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Razas" << std::endl;
        std::cout << "2. Clases" << std::endl;
        std::cout << "3. Armas" << std::endl;
        std::cout << "4. Armaduras" << std::endl;
        std::cout << "5. Volver" << std::endl;
        std::cout << "Escoge una opcion: ";
        std::cin >> opcion;

        while (opcion < 1 || opcion > 5)
        {
            std::cout << "Opcion no valida" << std::endl;
            std::cin >> opcion;
        }

        switch (opcion)
        {
        case 1:
            menuRazas();
            break;
        case 2:
            menuClases();
            break;
        case 3:
            menuArmas();
            break;
        case 4:
            menuArmaduras();
            break;
        }

    } while (opcion != 5);
}

#endif