
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
    void asignarMejorAmigo(Persona &amiguibi);
    
};

int main()
{
    Persona p1,p2;
    Persona* ptrp;
    p2.nombre="ignacio_allende";
    p1.asignarMejorAmigo(p2);
    cout<< p1.ptrMejorAmigo->nombre <<endl;
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
void Persona::asignarMejorAmigo(Persona &amiguibi){
    this->ptrMejorAmigo=&amiguibi;
}



/*

for(const Pesrona pers:gente) con un vector tipo persona llamado gente para irlos sacando {para cada persona de tipo persona en gente, tambien puedes cambiar const persona por auto}
    log(&pers) pers es la variable, como i
    log(pers.nombre)



*/