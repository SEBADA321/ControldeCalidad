#include "Lote.h"

using namespace ControlCalidadModel;

Lote::Lote(){
	this->codigoLote = 0;
	this->EstadoProducto = "";
	this->NroFrutasPodridas = 0;
	this->NroFrutasNoPodridas = 0;
	this->NroLote = 0;
	this->ListaFruta = gcnew List<Fruta^>();
	this->FechaProduccion = "";
	this->usuario = gcnew Usuario();
}

Lote::Lote(int codigoLote, String^ EstadoProducto, int NroFrutasPodridas, int NroFrutasNoPodridas,
					   int NroLote, List<Fruta^>^ listadefrutas, String^ FechaProduccion, Usuario^ usuario){
	this->codigoLote = codigoLote;
	this->EstadoProducto = EstadoProducto;
	this->NroFrutasPodridas = NroFrutasPodridas;
	this->NroFrutasNoPodridas = NroFrutasNoPodridas;
	this->NroLote = NroLote;
	this->ListaFruta = listadefrutas;
	this->FechaProduccion = FechaProduccion;
	this->usuario = usuario;
}