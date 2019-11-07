#include "GestorLote.h"


using namespace ControldeCalidadController;
using namespace ControlCalidadModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorLote::GestorLote(){
	this->ListaLote = gcnew List<Lote^>();
}

void GestorLote::AgregarLote(Lote^ objLote){
	this->ListaLote->Add(objLote);
}

void GestorLote::EliminarLote(int index){
	this->ListaLote->RemoveAt(index);
}

int GestorLote::ObtenerCantidadLotes(){
	return this->ListaLote->Count;
}

Lote^ GestorLote::ObtenerLote(int index){
	return this->ListaLote[index];
}

void GestorLote::EliminarLotexCodigo(int codigo){
	for (int i = 0; i < this->ListaLote->Count; i++){
		if (this->ListaLote[i]->codigo == codigo){
			this->ListaLote->RemoveAt(i);
			break;
		}
	}
}

Lote^ GestorLote::ObtenerLotexCodigo(int codigo){
	Lote^ objLoteEncontrado;
	for (int i = 0; i < this->ListaLote->Count; i++){
		if (this->ListaLote[i]->codigo == codigo){
			objLoteEncontrado = this->ListaLote[i];
			break;
		}
	}
	return objLoteEncontrado;
}

List<Lote^>^ GestorLote::ObtenerLotexUsuario(Usuario^ usuario){
	List<Lote^>^ ListaLotesEncontrados = gcnew List<Lote^>();
	for (int i = 0; i < this->ListaLote->Count; i++){
		if (this->ListaLote[i]->usuario->codigo == usuario->codigo){
			ListaLotesEncontrados->Add(this->ListaLote[i]);
		}
	}
	return ListaLotesEncontrados;
}


List<Lote^>^ GestorLote::ObtenerLotexEstadoLote(String^ EstadoLote){
	List<Lote^>^ ListaLotesEncontrados = gcnew List<Lote^>();
	for (int i = 0; i < this->ListaLote->Count; i++){
		if (this->ListaLote[i]->EstadoLote == EstadoLote){
			ListaLotesEncontrados->Add(this->ListaLote[i]);
		}
	}
	return ListaLotesEncontrados;
}

List<Lote^>^ GestorLote::BuscarLotexFechaProduccion(String^ FechaProduccion){
	List<Lote^>^ ListaLotesEncontrados = gcnew List<Lote^>();
	for (int i = 0; i < this->ListaLote->Count; i++){
		if (this->ListaLote[i]->FechaProduccion == FechaProduccion){
			ListaLotesEncontrados->Add(this->ListaLote[i]);
		}
	}
	return ListaLotesEncontrados;
}

void GestorLote::Serializar(){
	Stream^ objStream = File::Open("Lotes.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaLote);
	objStream->Close();
}

void GestorLote::Deserializar(){
	Stream^ objStream = File::Open("Lotes.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaLote = dynamic_cast<List<Lote^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}