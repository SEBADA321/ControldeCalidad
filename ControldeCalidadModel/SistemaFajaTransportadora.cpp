#include "SistemaFajaDistribuidora.h"

using namespace ControlCalidadModel;
SistemaFajaDistribuidora::SistemaFajaDistribuidora(int codigo, String^ EstadoSistema, String^ operacion, Usuario^ usuario){
	this->codigo = codigo;
	this->EstadoSistema = EstadoSistema;
	this->Operacion = operacion;
	this->usuario = usuario;
}

SistemaFajaDistribuidora::SistemaFajaDistribuidora(){
	this->codigo = 0;
	this->EstadoSistema = "";
	this->Operacion = "";
	this->usuario = gcnew Usuario();
}