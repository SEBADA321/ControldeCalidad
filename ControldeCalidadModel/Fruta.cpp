#include "Fruta.h"

using namespace ControlCalidadModel;
Fruta::Fruta(){
	this->estado = "Apto";
}

Fruta::Fruta(int codigo, String^ nombre, String^ tama�o, String^ color, String^ estado){
	this->codigo = codigo;
	this->nombre = nombre;
	this->tama�o = tama�o;
	this->color = color;
	this->estado = estado;
}