/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/* 
 * En este archivo se encuentran funciones que se utilizan para inicializar
 * los vectores de objetos.
 */

#ifndef INICIALIZADOR_H // Si no esta definido el preprocesador INICIALIZADOR_H
#define INICIALIZADOR_H // Definir el preprocesador INICIALIZADOR_H

#include <iostream> // Libreria para entrada y salida de datos
#include <fstream> // Libreria para manejo de archivos
#include <string> // Libreria para manejo de strings
#include <sstream> // Libreria para manejo de strings
#include <vector> // Libreria para manejo de vectores

#include "Arma.h" // Incluir la clase Arma
#include "Armadura.h" // Incluir la clase Armadura
#include "Raza.h" // Incluir la clase Raza
#include "Clase.h" // Incluir la clase Clase

// Genero

/**
 * Inicializar arreglo de generos
 */

std::string *inicializarGeneros()
{
    std::string *generos = new std::string[3];
    generos[0] = "Masculino";
    generos[1] = "Femenino";
    generos[2] = "Otro";

    return generos;
}

/**
 * Inicializar arreglo de generos
 * 
 * @param generos
 * @param numGeneros
 * @return 
 */

void mostrarGeneros(std::string *generos, int numGeneros)
{
    for (int i = 0; i < numGeneros; i++)
    {
        std::cout << i + 1 << ". " << generos[i] << std::endl;
    }
}
// Alineamientos

/**
 * Inicializar arreglo de alineamientos
 * 
 * @param
 * @return alineamientos
 */

std::string *inicializarAlineamientos()
{
    std::string *alineamientos = new std::string[9];
    alineamientos[0] = "Legal Bueno";
    alineamientos[1] = "Neutral Bueno";
    alineamientos[2] = "Caotico Bueno";
    alineamientos[3] = "Legal Neutral";
    alineamientos[4] = "Neutral";
    alineamientos[5] = "Caotico Neutral";
    alineamientos[6] = "Legal Malo";
    alineamientos[7] = "Neutral Malo";
    alineamientos[8] = "Caotico Malo";

    return alineamientos;
}

/**
 * Mostrar arreglo de alineamientos
 * 
 * @param alineamientos
 * @param numAlineamientos
 * @return 
 */

void mostrarAlineamientos(std::string *alineamientos, int numAlineamientos)
{
    for (int i = 0; i < numAlineamientos; i++)
    {
        std::cout << i + 1 << ". " << alineamientos[i] << std::endl;
    }
}

// Arma

/**
 * Inicializar vector de armas
 * 
 * @param
 * @return armas
 */

Arma *inicializarArmas()
{
    // Abrir el archivo
    std::ifstream archivo("./data/armas.txt");
    // Comprobar que el archivo se ha abierto correctamente
    if (!archivo.is_open())
    {
        std::cout << "Error al abrir el archivo" << std::endl;
        return nullptr;
    }

    // Leer la primera linea para saber el numero de armas
    std::string linea;
    std::getline(archivo, linea);
    int numArmas = std::stoi(linea);

    // Crear el array de armas
    Arma *armas = new Arma[numArmas];

    // Leer el resto de lineas
    int i = 0;
    while (std::getline(archivo, linea))
    {
        std::stringstream ss(linea);
        std::string token;
        std::vector<std::string> tokens;
        while (std::getline(ss, token, '|'))
        {
            tokens.push_back(token);
        }
        // Crear el arma
        Arma arma(tokens[0], tokens[1], std::stoi(tokens[2]), std::stoi(tokens[3]),
                  tokens[4], tokens[5], std::stoi(tokens[6]));
        // Guardar el arma en el array
        armas[i] = arma;
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de armas
    return armas;
}

/**
 * Mostrar vector de armas
 * 
 * @param armas
 * @param numArmas
 * @return 
 */

void mostrarArmas(Arma *armas, int numArmas)
{
    for (int i = 0; i < numArmas; i++)
    {
        std::cout << i + 1 << ". " << armas[i].getNombre() << std::endl;
    }
}

// Armadura

/**
 * Inicializar vector de armaduras
 * 
 * @param
 * @return armaduras
 */

Armadura *inicializarArmaduras()
{
    // Abrir el archivo
    std::ifstream archivo("./data/armaduras.txt");
    // Comprobar que el archivo se ha abierto correctamente
    if (!archivo.is_open())
    {
        std::cout << "Error al abrir el archivo" << std::endl;
        return nullptr;
    }

    // Leer la primera linea para saber el numero de armaduras
    std::string linea;
    std::getline(archivo, linea);
    int numArmaduras = std::stoi(linea);

    // Crear el array de armaduras
    Armadura *armaduras = new Armadura[numArmaduras];

    // Leer el resto de lineas
    int i = 0;
    while (std::getline(archivo, linea))
    {
        std::stringstream ss(linea);
        std::string token;
        std::vector<std::string> tokens;
        while (std::getline(ss, token, '|'))
        {
            tokens.push_back(token);
        }
        // Crear la armadura
        Armadura armadura(tokens[0], tokens[1], std::stoi(tokens[2]), std::stoi(tokens[3]), 
            tokens[4], tokens[5], std::stoi(tokens[6]));
        // Agregar la armadura al array
        armaduras[i] = armadura;
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de armaduras
    return armaduras;
}

/**
 * Mostrar vector de armaduras
 * 
 * @param armaduras
 * @param numArmaduras
 * @return 
 */

void mostrarArmaduras(Armadura *armaduras, int numArmaduras)
{
    for (int i = 0; i < numArmaduras; i++)
    {
        std::cout << i + 1 << ". " << armaduras[i].getNombre() << std::endl;
    }
}

// Razas

/**
 * Inicializar vector de razas
 * 
 * @param
 * @return razas
 */

Raza *inicializarRazas()
{
    // Abrir el archivo
    std::ifstream archivo("./data/razas.txt");
    // Comprobar que el archivo se ha abierto correctamente
    if (!archivo.is_open())
    {
        std::cout << "Error al abrir el archivo" << std::endl;
        return nullptr;
    }

    // Leer la primera linea para saber el numero de razas
    std::string linea;
    std::getline(archivo, linea);
    int numRazas = std::stoi(linea);

    // Crear el array de razas
    Raza *razas = new Raza[numRazas];

    // Leer el resto de lineas
    int i = 0;
    while (std::getline(archivo, linea))
    {
        std::stringstream ss(linea);
        std::string token;
        std::vector<std::string> tokens;
        while (std::getline(ss, token, '|'))
        {
            tokens.push_back(token);
        }
        // Crear la raza
        Raza raza(tokens[0], tokens[1], std::stoi(tokens[2]), std::stoi(tokens[3]), 
            std::stoi(tokens[4]), std::stoi(tokens[5]), std::stoi(tokens[6]), std::stoi(tokens[7]));
        // Añadir la raza al array
        razas[i] = raza;
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de razas
    return razas;
}

/**
 * Mostrar vector de razas
 * 
 * @param razas
 * @param numRazas
 * @return 
 */

void mostrarRazas(Raza *razas, int numRazas)
{
    for (int i = 0; i < numRazas; i++)
    {
        std::cout << i + 1 << ". " << razas[i].getNombre() << std::endl;
    }
}

// Clases

/**
 * Inicializar vector de clases
 * 
 * @param
 * @return clases
 */

Clase *inicializarClases()
{
    Arma *armas = inicializarArmas();
    Armadura *armaduras = inicializarArmaduras();

    // Abrir el archivo
    std::ifstream archivo("./data/clases.txt");
    // Comprobar que el archivo se ha abierto correctamente
    if (!archivo.is_open())
    {
        std::cout << "Error al abrir el archivo" << std::endl;
        return nullptr;
    }

    // Leer la primera linea para saber el numero de clases
    std::string linea;
    std::getline(archivo, linea);
    int numClases = std::stoi(linea);

    // Crear el array de clases
    Clase *clases = new Clase[numClases];

    // Leer el resto de lineas
    int i = 0;
    while (std::getline(archivo, linea))
    {
        std::stringstream ss(linea);
        std::string token;
        std::vector<std::string> tokens;
        while (std::getline(ss, token, '|'))
        {
            tokens.push_back(token);
        }
        // Crear la clase
        Clase clase(tokens[0], tokens[1], armas[i], armaduras[i]);
        // Guardar la clase en el array
        clases[i] = clase;
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de clases
    return clases;
}

/**
 * Mostrar vector de clases
 * 
 * @param clases
 * @param numClases
 * @return 
 */

void mostrarClases(Clase *clases, int numClases)
{
    for (int i = 0; i < numClases; i++)
    {
        std::cout << i + 1 << ". " << clases[i].getNombre() << std::endl;
    }
}

#endif // Fin del preprocesador INICIALIZAR_H