// En este archivo se define la clase Clase, que representa a una clase de personaje.

#ifndef CLASE_H
#define CLASE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include "Arma.h"
#include "Armadura.h"

class Clase
{
private:
    std::string nombre;
    std::string descripcion;
    Arma armaInicial;
    Armadura armaduraInicial;
public:
    // Constructores
    Clase();
    Clase(std::string nombre, std::string descripcion, Arma armaInicial, 
        Armadura armaduraInicial);

    // Getters
    std::string getNombre();
    std::string getDescripcion();
    Arma getArmaInicial();
    Armadura getArmaduraInicial();

    // Setters
    void setNombre(std::string nombre);
    void setDescripcion(std::string descripcion);
    void setArmaInicial(Arma armaInicial);
    void setArmaduraInicial(Armadura armaduraInicial);

    // Metodos
    void mostrarClase();
};

// Constructores

// Constructor por defecto

Clase::Clase()
{
    nombre = "Guerrero";
    descripcion = "Todos los guerreros comparten un dominio magistral de las armas y armaduras, y un exhaustivo conocimiento de las habilidades del combate. Además, están muy relacionados con la muerte, tanto repartiéndola como mirándola fijamente, desafiantes.";
    armaInicial = Arma();
    armaduraInicial = Armadura();
}

// Constructor con parametros

Clase::Clase(std::string nombre, std::string descripcion, Arma armaInicial, Armadura armaduraInicial)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->armaInicial = armaInicial;
    this->armaduraInicial = armaduraInicial;
}

// Getters

std::string Clase::getNombre()
{
    return nombre;
}

std::string Clase::getDescripcion()
{
    return descripcion;
}

Arma Clase::getArmaInicial()
{
    return armaInicial;
}

Armadura Clase::getArmaduraInicial()
{
    return armaduraInicial;
}

// Setters

void Clase::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Clase::setDescripcion(std::string descripcion)
{
    this->descripcion = descripcion;
}

void Clase::setArmaInicial(Arma armaInicial)
{
    this->armaInicial = armaInicial;
}

void Clase::setArmaduraInicial(Armadura armaduraInicial)
{
    this->armaduraInicial = armaduraInicial;
}

// Metodos

void Clase::mostrarClase()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Arma inicial: " << armaInicial.getNombre() << std::endl;
    std::cout << "Armadura inicial: " << armaduraInicial.getNombre() << std::endl;
}

// Funciones

#endif