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

#endif