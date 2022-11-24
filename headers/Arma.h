// En este archivo se define la clase Arma, que representa a una arma de un personaje.

#ifndef ARMA_H
#define ARMA_H

#include <iostream>
#include <string>
#include "Objeto.h"

class Arma: public Objeto
{
private:
    std::string tipo = "Arma";
    int daño;
    int alcance;
    int critico;
    int criticoMultiplicador;
public:
    // Constructores
    Arma();
    Arma(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material, int estado, int daño, int alcance, int critico, int criticoMultiplicador);

    // Getters
    std::string getTipo();
    int getDaño();
    int getAlcance();
    int getCritico();
    int getCriticoMultiplicador();

    // Setters
    void setTipo(std::string tipo);
    void setDaño(int daño);
    void setAlcance(int alcance);
    void setCritico(int critico);
    void setCriticoMultiplicador(int criticoMultiplicador);

    // Metodos
    void mostrarDatos();
};

Arma::Arma()
{
    nombre = "Espada desgastada";
    descripcion = "Es una espada de madera, con una hoja de acero oxidado. No parece muy útil.";
    peso = 2;
    valor = 0;
    subtipo = "Espada";
    material = "Madera y acero";
    estado = 100;
    daño = 10;
    alcance = 0;
    critico = 0;
    criticoMultiplicador = 0;
}

Arma::Arma(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, std::string material, int estado, int daño, int alcance, int critico, int criticoMultiplicador)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->peso = peso;
    this->valor = valor;
    this->subtipo = subtipo;
    this->material = material;
    this->estado = estado;
    this->daño = daño;
    this->alcance = alcance;
    this->critico = critico;
    this->criticoMultiplicador = criticoMultiplicador;
}

std::string Arma::getTipo()
{
    return tipo;
}

int Arma::getDaño()
{
    return daño;
}

int Arma::getAlcance()
{
    return alcance;
}

int Arma::getCritico()
{
    return critico;
}

int Arma::getCriticoMultiplicador()
{
    return criticoMultiplicador;
}

void Arma::setTipo(std::string tipo)
{
    this->tipo = tipo;
}

void Arma::setDaño(int daño)
{
    this->daño = daño;
}

void Arma::setAlcance(int alcance)
{
    this->alcance = alcance;
}

void Arma::setCritico(int critico)
{
    this->critico = critico;
}

void Arma::setCriticoMultiplicador(int criticoMultiplicador)
{
    this->criticoMultiplicador = criticoMultiplicador;
}

void Arma::mostrarDatos()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Peso: " << peso << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Subtipo: " << subtipo << std::endl;
    std::cout << "Material: " << material << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Daño: " << daño << std::endl;
    std::cout << "Alcance: " << alcance << std::endl;
    std::cout << "Critico: " << critico << std::endl;
    std::cout << "Critico Multiplicador: " << criticoMultiplicador << std::endl;
}

#endif