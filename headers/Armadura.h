/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/** 
 * Clase Armadura: Clase que representa a las armaduras del juego 
 * y hereda de la clase Objeto.
 */

#ifndef ARMADURA_H // Si no esta definido el preprocesador ARMADURA_H
#define ARMADURA_H // Definir el preprocesador ARMADURA_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

#include "Objeto.h" // Incluir la clase Objeto

class Armadura : public Objeto
{
private:
    // Atributos
    std::string tipo = "Armadura";
    int defensa;

public:
    // Constructores
    Armadura();
    Armadura(std::string nombre, std::string descripcion, int peso, int valor,
        std::string subtipo, std::string material, int defensa);

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

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Armadura
 */

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

/**
 * Constructor con parametros
 *
 * @param nombre
 * @param descripcion
 * @param peso
 * @param valor
 * @param subtipo
 * @param material
 * @param defensa
 * @return Objeto Armadura
 */

Armadura::Armadura(std::string nombre, std::string descripcion, int peso, int valor, 
    std::string subtipo, std::string material, int defensa)
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

/**
 * Getter del atributo defensa
 *
 * @param
 * @return defensa
 */

int Armadura::getDefensa()
{
    return defensa;
}

// Setters

/**
 * Setter del atributo defensa
 *
 * @param defensa
 * @return
 */

void Armadura::setDefensa(int defensa)
{
    this->defensa = defensa;
}

// Metodos

/**
 * Metodo mostrarDatos: Muestra los datos de la armadura
 *
 * @param
 * @return
 */

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

#endif // Cierre del preprocesador ARMADURA_H