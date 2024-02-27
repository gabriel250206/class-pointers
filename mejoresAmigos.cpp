
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define log(X) cout << X << endl;

class Persona
{
    int edad;

public:
    string nombre;
    Persona *ptrMejorAmigo;

    Persona();
    Persona(int edad, string nombre);

    int getEdad();

    /*
    agregar parámetros necesarios para poder recibir una Persona en específico
    y asignarla como mejor amigo. 
    */
    void asignarMejorAmigo(...);
    
};

int main()
{

    return 0;
}

Persona::Persona()
{
    this->edad = 0;
    this->nombre = "";
}

Persona::Persona(int edad, string nombre)
{
    this->edad = edad;
    this->nombre = nombre;
}

int Persona::getEdad()
{
    return this->edad;
}

/*
    Implementar función void asignarMejorAmigo(...)
*/