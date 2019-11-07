#include "SistemaFajaDistribuidora.h"

using namespace ControlCalidadModel;
SistemaFajaDistribuidora::SistemaFajaDistribuidora(int codigo, String^ EstadoSistema, String^ operacion, Usuario^ usuario){
	this->codigo = codigo;
	this->EstadoSistema = EstadoSistema;
	this->Operacion = operacion;
	this->usuario = usuario;
}

SistemaFajaDistribuidora::SistemaFajaDistribuidora(){
}