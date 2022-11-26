// En este archivo se define la clase Armadura, que representa a una armadura de un personaje.

#ifndef ARMADURA_H
#define ARMADURA_H

#include <iostream>
#include <string>
#include "Objeto.h"

class Armadura : public Objeto
{
private:
    std::string tipo = "Armadura";
    int defensa;

public:
    // Constructores
    Armadura();
    Armadura(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material, int defensa);

    // Getters
    std::string getTipo();
    int getDefensa();

    // Setters
    void setTipo(std::string tipo);
    void setDefensa(int defensa);

    // Metodos
    void mostrarDatos();
};

// Constructores

// Constructor por defecto

Armadura::Armadura()
{
    nombre = "Armadura desgastada";
    descripcion = "Es una armadura de madera, con placas de acero oxidado. No parece muy útil.";
    peso = 2;
    valor = 0;
    subtipo = "Armadura";
    material = "Madera y acero";
    defensa = 10;
}

// Constructor con parametros

Armadura::Armadura(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material, int defensa)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->peso = peso;
    this->valor = valor;
    this->subtipo = subtipo;
    this->material = material;
    this->defensa = defensa;
}

// Getters

int Armadura::getDefensa()
{
    return defensa;
}

// Setters

void Armadura::setDefensa(int defensa)
{
    this->defensa = defensa;
}

// Metodos

void Armadura::mostrarDatos()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Peso: " << peso << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Subtipo: " << subtipo << std::endl;
    std::cout << "Material: " << material << std::endl;
    std::cout << "Defensa: " << defensa << std::endl;
}

// Funciones 

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

#endif