// Este archivo se encuentran las funciones para inicializar las clases y razas, y tambien las funciones para mostrarlas por pantalla. El problema es que al compilar el programa, me da un error en la funcion inicializarRazas() y en la funcion inicializarClases(). El error es el siguiente:

#ifndef INICIALIZADOR_H
#define INICIALIZADOR_H

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>

#include "Arma.h"
#include "Armadura.h"
#include "Raza.h"
#include "Clase.h"

// Arma

// Funcion para inicializar las armas

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
        Arma arma(tokens[0], tokens[1], std::stoi(tokens[2]), std::stoi(tokens[3]), tokens[4], tokens[5], std::stoi(tokens[6]));
        // Guardar el arma en el array
        armas[i] = arma;
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de armas
    return armas;
}

// Funcion para mostrar todas las armas

void mostrarArmas(Arma *armas, int numArmas)
{
    for (int i = 0; i < numArmas; i++)
    {
        std::cout << i + 1 << ". " << armas[i].getNombre() << std::endl;
    }
}

// Armadura

// Funcion para inicializar los objetos de tipo Armadura

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
        Armadura armadura(tokens[0], tokens[1], std::stoi(tokens[2]), std::stoi(tokens[3]), tokens[4], tokens[5], std::stoi(tokens[6]));
        // Agregar la armadura al array
        armaduras[i] = armadura; 
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de armaduras
    return armaduras;
}

// Funcion para mostrar todas las armaduras

void mostrarArmaduras(Armadura *armaduras, int numArmaduras)
{
    for (int i = 0; i < numArmaduras; i++)
    {
        std::cout << i + 1 << ". " << armaduras[i].getNombre() << std::endl;
    }
}

// Razas

// Funcion para inicializar las razas

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
        Raza raza(tokens[0], tokens[1], std::stoi(tokens[2]), std::stoi(tokens[3]), std::stoi(tokens[4]), std::stoi(tokens[5]), std::stoi(tokens[6]), std::stoi(tokens[7]));
        // Añadir la raza al array
        razas[i] = raza;
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de razas
    return razas;
}

// Funcion para mostrar las razas

void mostrarRazas(Raza *razas, int numRazas)
{
    for (int i = 0; i < numRazas; i++)
    {
        std::cout << i + 1 << ". " << razas[i].getNombre() << std::endl;
    }
}

// Clases

// Funcion para inicializar las clases

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

// Funcion para mostrar todas las clases

void mostrarClases(Clase *clases, int numClases)
{
    for (int i = 0; i < numClases; i++)
    {
        std::cout << i + 1 << ". " << clases[i].getNombre() << std::endl;
    }
}

#endif