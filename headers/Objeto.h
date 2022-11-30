/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/**
 * Clase Objeto: Clase que representa a los objetos del juego.
 */

#ifndef OBJETO_H // Si no esta definido el preprocesador OBJETO_H
#define OBJETO_H // Definir el preprocesador OBJETO_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

class Objeto
{
protected:
    // Atributos
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

// Constructores

/**
 * Constructor por default
 *
 * @param
 * @return Objeto
 */

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

/**
 * Constructor con parametros
 *
 * @param nombre
 * @param descripcion
 * @param peso
 * @param valor
 * @param tipo
 * @param subtipo
 * @param material
 * @return Objeto
 */

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

/**
 * Getter del atributo nombre
 *
 * @param
 * @return nombre
 */

std::string Objeto::getNombre()
{
    return nombre;
}

/**
 * Getter del atributo descripcion
 *
 * @param
 * @return descripcion
 */

std::string Objeto::getDescripcion()
{
    return descripcion;
}

/**
 * Getter del atributo peso
 *
 * @param
 * @return peso
 */

int Objeto::getPeso()
{
    return peso;
}

/**
 * Getter del atributo valor
 *
 * @param
 * @return valor
 */

int Objeto::getValor()
{
    return valor;
}

/**
 * Getter del atributo tipo
 *
 * @param
 * @return tipo
 */

std::string Objeto::getTipo()
{
    return tipo;
}

/**
 * Getter del atributo subtipo
 *
 * @param
 * @return subtipo
 */

std::string Objeto::getSubtipo()
{
    return subtipo;
}

/**
 * Getter del atributo material
 *
 * @param
 * @return material
 */

std::string Objeto::getMaterial()
{
    return material;
}

// Setters

/**
 * Setter del atributo nombre
 *
 * @param nombre
 * @return
 */

void Objeto::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

/**
 * Setter del atributo descripcion
 *
 * @param descripcion
 * @return
 */

void Objeto::setDescripcion(std::string descripcion)
{
    this->descripcion = descripcion;
}

/**
 * Setter del atributo peso
 *
 * @param peso
 * @return
 */

void Objeto::setPeso(int peso)
{
    this->peso = peso;
}

/**
 * Setter del atributo valor
 *
 * @param valor
 * @return
 */

void Objeto::setValor(int valor)
{
    this->valor = valor;
}

/**
 * Setter del atributo tipo
 *
 * @param tipo
 * @return
 */

void Objeto::setTipo(std::string tipo)
{
    this->tipo = tipo;
}

/**
 * Setter del atributo subtipo
 *
 * @param subtipo
 * @return
 */

void Objeto::setSubtipo(std::string subtipo)
{
    this->subtipo = subtipo;
}

/**
 * Setter del atributo material
 *
 * @param material
 * @return
 */

void Objeto::setMaterial(std::string material)
{
    this->material = material;
}

// Metodos

/**
 * Metodo que muestra los datos del objeto
 *
 * @param
 * @return
 */

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

#endif // Cierre del preprocesador OBJETO_H
