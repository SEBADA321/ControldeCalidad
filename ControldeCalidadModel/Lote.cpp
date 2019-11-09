#include "Lote.h"

using namespace ControlCalidadModel;

Lote::Lote(){
	this->ListaFruta = gcnew List<Fruta^>();
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