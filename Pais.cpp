//
// Created by Javier Nuñez on 14/09/2017.
//
#include "Pais.h"

Pais::Pais()
{
    //ctor
}

Pais::Pais(string nombre, int habitantes, bool hablan_espanol)
{
    this->nombre=nombre;
    this->habitantes=habitantes;
    this->hablan_espanol=hablan_espanol;
}

Pais::~Pais()
{
    //dtor
}
