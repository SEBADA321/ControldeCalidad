#include "Usuario.h"

using namespace ControlCalidadModel;
ControlCalidadModel::Usuario::Usuario(){
}
Usuario::Usuario(int codigo, String^ profesion, String^ nombres, String^ apellidos, String^ password){
	this->codigo = codigo;
	this->nombres = nombres;
	this->profesion = profesion;
	this->apellidos = apellidos;
	this->password = password;
}