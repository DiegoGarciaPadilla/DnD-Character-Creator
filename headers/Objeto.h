// En este archivo se define la clase Objeto, que representa a un objeto que puede ser usado por un personaje.

#ifndef OBJETO_H
#define OBJETO_H

#include <iostream>
#include <string>

class Objeto
{
private:
    std::string nombre;
    std::string descripcion;
    int peso;
    int valor;
    std::string tipo;
    std::string subtipo;
    std::string material;
    int estado;

public:
    // Constructores
    Objeto();
    Objeto(std::string nombre, std::string descripcion, int peso, int valor, std::string tipo, std::string subtipo, std::string material, int estado);

    // Getters
    std::string getNombre();
    std::string getDescripcion();
    int getPeso();
    int getValor();
    std::string getTipo();
    std::string getSubtipo();
    std::string getMaterial();
    int getEstado();

    // Setters
    void setNombre(std::string nombre);
    void setDescripcion(std::string descripcion);
    void setPeso(int peso);
    void setValor(int valor);
    void setTipo(std::string tipo);
    void setSubtipo(std::string subtipo);
    void setMaterial(std::string material);
    void setEstado(int estado);

    // Metodos
    void mostrarDatos();
}

// Constructor por defecto

Objeto::Objeto()
{
    nombre = " ";
    descripcion = " ";
    peso = 0;
    valor = 0;
    tipo = " ";
    subtipo = " ";
    material = " ";
    estado = 0;
}

// Constructor con parametros

Objeto::Objeto(std::string nombre, std::string descripcion, int peso, int valor, std::string tipo, std::string subtipo, std::string material, int estado)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->peso = peso;
    this->valor = valor;
    this->tipo = tipo;
    this->subtipo = subtipo;
    this->material = material;
    this->estado = estado;
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

int Objeto::getEstado()
{
    return estado;
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

void Objeto::setEstado(int estado)
{
    this->estado = estado;
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
