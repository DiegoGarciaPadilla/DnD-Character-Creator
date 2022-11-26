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

#endif