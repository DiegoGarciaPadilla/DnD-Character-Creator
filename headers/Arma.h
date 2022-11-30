/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/**
 * Clase Arma: Clase que representa a las armas del juego 
 * y hereda de la clase Objeto.
 */

#ifndef ARMA_H // Si no esta definido el preprocesador ARMA_H
#define ARMA_H // Definir el preprocesador ARMA_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

#include "Objeto.h" // Incluir la clase Objeto

class Arma : public Objeto
{
private:
    // Atributos
    std::string tipo = "Arma";
    int daño;

public:
    // Constructores
    Arma();
    Arma(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo,
        std::string material, int daño);

    // Getters
    std::string getTipo();
    int getDaño();

    // Setters
    void setTipo(std::string tipo);
    void setDaño(int daño);

    // Metodos
    void mostrarDatos();
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Arma
 */

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

/**
 * Constructor con parametros
 *
 * @param nombre
 * @param descripcion
 * @param peso
 * @param valor
 * @param subtipo
 * @param material
 * @param daño
 * @return Objeto Arma
 */

Arma::Arma(std::string nombre, std::string descripcion, int peso, int valor, std::string subtipo, 
    std::string material, int daño)
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

/**
 * Getter del atributo daño
 *
 * @param
 * @return daño
 */

int Arma::getDaño()
{
    return daño;
}

// Setters

/**
 * Setter del atributo daño
 *
 * @param daño
 * @return
 */

void Arma::setDaño(int daño)
{
    this->daño = daño;
}

// Metodos

/**
 * Metodo que muestra los datos de la arma
 *
 * @param
 * @return
 */

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

#endif // Cierre del preprocesador ARMA_H