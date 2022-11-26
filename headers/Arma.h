// En este archivo se define la clase Arma, que representa a una arma de un personaje.

#ifndef ARMA_H
#define ARMA_H

#include <iostream>
#include <string>
#include "Objeto.h"

class Arma : public Objeto
{
private:
    std::string tipo = "Arma";
    int daño;
public:
    // Constructores
    Arma();
    Arma(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material,int daño);

    // Getters
    std::string getTipo();
    int getDaño();

    // Setters
    void setTipo(std::string tipo);
    void setDaño(int daño);

    // Metodos
    void mostrarDatos();
};

// Constructores

// Constructor por defecto

Arma::Arma()
{
    nombre = "Espada oxidada";
    descripcion = "Es una espada oxidada, con el filo muy desgastado. No parece muy útil.";
    peso = 2;
    valor = 0;
    subtipo = "Espada";
    material = "Madera y acero";
    daño = 10;
}

// Constructor con parametros

Arma::Arma(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material, int daño)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->peso = peso;
    this->valor = valor;
    this->subtipo = subtipo;
    this->material = material;
    this->daño = daño;
}

// Getters

int Arma::getDaño()
{
    return daño;
}

// Setters

void Arma::setDaño(int daño)
{
    this->daño = daño;
}

// Metodos

void Arma::mostrarDatos()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Peso: " << peso << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Subtipo: " << subtipo << std::endl;
    std::cout << "Material: " << material << std::endl;
    std::cout << "Daño: " << daño << std::endl;
}

#endif