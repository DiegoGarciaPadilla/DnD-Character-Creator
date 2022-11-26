// En este archivo se define la clase Objeto, que representa a un objeto que puede ser usado por un personaje.

#ifndef OBJETO_H
#define OBJETO_H

#include <iostream>
#include <string>

class Objeto
{
protected:
    std::string nombre;
    std::string descripcion;
    int peso;
    int valor;
    std::string tipo;
    std::string subtipo;
    std::string material;

public:
    // Constructores
    Objeto();
    Objeto(std::string nombre, std::string descripcion, int peso, int valor, 
        std::string tipo, std::string subtipo, std::string material);

    // Getters
    std::string getNombre();
    std::string getDescripcion();
    int getPeso();
    int getValor();
    std::string getTipo();
    std::string getSubtipo();
    std::string getMaterial();

    // Setters
    void setNombre(std::string nombre);
    void setDescripcion(std::string descripcion);
    void setPeso(int peso);
    void setValor(int valor);
    void setTipo(std::string tipo);
    void setSubtipo(std::string subtipo);
    void setMaterial(std::string material);

    // Metodos
    void mostrarDatos();
};

// Constructor por defecto

Objeto::Objeto()
{
    nombre = "Objeto";
    descripcion = "Es un objeto.";
    peso = 1;
    valor = 0;
    tipo = "Objeto";
    subtipo = "Objeto";
    material = "Objeto";
}

// Constructor con parametros

Objeto::Objeto(std::string nombre, std::string descripcion, int peso, int valor, 
    std::string tipo, std::string subtipo, std::string material)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->peso = peso;
    this->valor = valor;
    this->tipo = tipo;
    this->subtipo = subtipo;
    this->material = material;
}

// Getters

std::string Objeto::getNombre()
{
    return nombre;
}

std::string Objeto::getDescripcion()
{
    return descripcion;
}

int Objeto::getPeso()
{
    return peso;
}

int Objeto::getValor()
{
    return valor;
}

std::string Objeto::getTipo()
{
    return tipo;
}

std::string Objeto::getSubtipo()
{
    return subtipo;
}

std::string Objeto::getMaterial()
{
    return material;
}

// Setters

void Objeto::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Objeto::setDescripcion(std::string descripcion)
{
    this->descripcion = descripcion;
}

void Objeto::setPeso(int peso)
{
    this->peso = peso;
}

void Objeto::setValor(int valor)
{
    this->valor = valor;
}

void Objeto::setTipo(std::string tipo)
{
    this->tipo = tipo;
}

void Objeto::setSubtipo(std::string subtipo)
{
    this->subtipo = subtipo;
}

void Objeto::setMaterial(std::string material)
{
    this->material = material;
}

// Metodos

void Objeto::mostrarDatos()
{
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Descripcion: " << this->descripcion << std::endl;
    std::cout << "Peso: " << this->peso << std::endl;
    std::cout << "Valor: " << this->valor << std::endl;
    std::cout << "Tipo: " << this->tipo << std::endl;
    std::cout << "Subtipo: " << this->subtipo << std::endl;
    std::cout << "Material: " << this->material << std::endl;
}

#endif
