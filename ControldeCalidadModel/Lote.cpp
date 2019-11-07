#include "Lote.h"

using namespace ControlCalidadModel;

Lote::Lote(){
	this->codigo = 0;
	this->EstadoLote = "";
	this->NroFrutasPodridas = 0;
	this->NroFrutasNoPodridas = 0;
	this->NroLote = 0;
	this->FechaProduccion = "";
}

Lote::Lote(int codigo, String^ EstadoLote, int NroFrutasPodridas, int NroFrutasNoPodridas,
					   int NroLote, List<Fruta^>^ listadefrutas, String^ FechaProduccion, Usuario^ usuario){
	this->codigo = codigo;
	this->EstadoLote = EstadoLote;
	this->NroFrutasPodridas = NroFrutasPodridas;
	this->NroFrutasNoPodridas = NroFrutasNoPodridas;
	this->NroLote = NroLote;
	this->ListaFruta = listadefrutas;
	this->FechaProduccion = FechaProduccion;
	this->usuario = usuario;
}