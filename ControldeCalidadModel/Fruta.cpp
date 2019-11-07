#include "Fruta.h"

using namespace ControlCalidadModel;
Fruta::Fruta(){
}

Fruta::Fruta(int codigo, String^ nombre, int tamaño, String^ color, String^ estado){
	this->codigo = codigo;
	this->nombre = nombre;
	this->tamaño = tamaño;
	this->color = color;
	this->estado = estado;
}