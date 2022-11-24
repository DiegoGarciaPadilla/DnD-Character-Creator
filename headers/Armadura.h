// En este archivo se define la clase Armadura, que representa a una armadura de un personaje.

#ifndef ARMADURA_H
#define ARMADURA_H

#include <iostream>
#include <string>
#include "Objeto.h"

class Armadura: public Objeto
{
private:
    std::string tipo = "Armadura";
    int defensa;
public:
    // Constructores
    Armadura();
    Armadura(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material, int estado, int defensa);

    // Getters
    std::string getTipo();
    int getDefensa();

    // Setters
    void setTipo(std::string tipo);
    void setDefensa(int defensa);

    // Metodos
    void mostrarDatos();
};

Armadura::Armadura()
{
    nombre = "Armadura desgastada";
    descripcion = "Es una armadura de madera, con placas de acero oxidado. No parece muy útil.";
    peso = 2;
    valor = 0;
    subtipo = "Armadura";
    material = "Madera y acero";
    estado = 100;
    defensa = 10;
}

Armadura::Armadura(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material, int estado, int defensa)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->peso = peso;
    this->valor = valor;
    this->subtipo = subtipo;
    this->material = material;
    this->estado = estado;
    this->defensa = defensa;
}

std::string Armadura::getTipo()
{
    return tipo;
}

int Armadura::getDefensa()
{
    return defensa;
}

void Armadura::setTipo(std::string tipo)
{
    this->tipo = tipo;
}

void Armadura::setDefensa(int defensa)
{
    this->defensa = defensa;
}

void Armadura::mostrarDatos()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Peso: " << peso << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Subtipo: " << subtipo << std::endl;
    std::cout << "Material: " << material << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Defensa: " << defensa << std::endl;
}

#endif