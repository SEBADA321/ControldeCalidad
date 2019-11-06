#include "Usuario.h"

using namespace ControlCalidadModel;
ControlCalidadModel::Usuario::Usuario(){
	this->codigo = 0;
	this->nombres = "";
	this->profesion = "";
	this->apellidos = "";

}
Usuario::Usuario(int codigo, String^ profesion, String^ nombres, String^ apellidos){
	this->codigo = codigo;
	this->nombres = nombres;
	this->profesion = profesion;
	this->apellidos = apellidos;
}


