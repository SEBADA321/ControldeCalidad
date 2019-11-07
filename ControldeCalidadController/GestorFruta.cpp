#include "GestorFruta.h"

using namespace ControldeCalidadController;
using namespace ControlCalidadModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorFruta::GestorFruta(){
	this->ListaFruta = gcnew List<Fruta^>();
}

void GestorFruta::AgregarFruta(Fruta^ objFruta){
	this->ListaFruta->Add(objFruta);
}

void GestorFruta::EliminarFruta(int index){
	this->ListaFruta->RemoveAt(index);
}

int GestorFruta::ObtenerCantidadFruta(){
	return this->ListaFruta->Count;
}

Fruta^ GestorFruta::ObtenerFruta(int index){
	return this->ListaFruta[index];
}

void GestorFruta::EliminarFrutaxCodigo(int id){
	for (int i = 0; i < this->ListaFruta->Count; i++){
		if (this->ListaFruta[i]->codigo == id){
			this->ListaFruta->RemoveAt(i);
			break;
		}
	}
}


Fruta^ GestorFruta::ObtenerFrutaxCodigo(int id){
	Fruta^ objFrutaEncontrada;
	for (int i = 0; i < this->ListaFruta->Count; i++){
		if (this->ListaFruta[i]->codigo == id){
			objFrutaEncontrada = this->ListaFruta[i];
			break;
		}
	}
	return objFrutaEncontrada;
}

List<Fruta^>^ GestorFruta::BuscarFrutaxNombre(String^ nombre){
	List<Fruta^>^ listaFrutaEncontrados = gcnew List<Fruta^>();
	for (int i = 0; i < this->ListaFruta->Count; i++){
		if (this->ListaFruta[i]->nombre == nombre){
			listaFrutaEncontrados->Add(this->ListaFruta[i]);
		}
	}
	return listaFrutaEncontrados;
}

void GestorFruta::Serializar(){
	Stream^ objStream = File::Open("Frutas.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaFruta);
	objStream->Close();
}

void GestorFruta::Deserializar(){
	Stream^ objStream = File::Open("Frutas.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaFruta = dynamic_cast<List<Fruta^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}
