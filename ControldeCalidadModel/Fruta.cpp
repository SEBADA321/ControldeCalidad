#include "Fruta.h"

using namespace ControlCalidadModel;
Fruta::Fruta(){
	this->estado = "Apto";
}

Fruta::Fruta(int codigo, String^ nombre, String^ tamaño, String^ color, String^ estado){
	this->codigo = codigo;
	this->nombre = nombre;
	this->tamaño = tamaño;
	this->color = color;
	this->estado = estado;
}