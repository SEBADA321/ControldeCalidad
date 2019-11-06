#include "GestorFruta.h"

using namespace ControldeCalidadController;
using namespace ControlCalidadModel;
using namespace System::Collections::Generic;
using namespace System::IO; //Aquí esta la clase FILE que sirve para archivos de texto.
using namespace System;
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

void GestorFruta::LeerFrutaDesdeArchivo(){
	this->ListaFruta->Clear();
	//El archivo de texto no es más que un arreglo de string
	array<String^>^ lineas = File::ReadAllLines("Fruta.txt");

	String^ separadores = ";";
	for each(String^ lineaFruta in lineas){
		array<String^>^ palabras = lineaFruta->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(palabras[0]);
		String^ nombre = palabras[1];
		int tamaño = Convert::ToInt32(palabras[2]);
		String^ color = palabras[3];
		String^ estado = palabras[4];
		Fruta^ objFruta = gcnew Fruta(codigo, nombre, tamaño, color, estado);
		this->ListaFruta->Add(objFruta);
	}
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

void GestorFruta::EscribirFrutaEnArchivo(){
	array<String^>^ lineas = gcnew array<String^>(this->ListaFruta->Count);
	for (int i = 0; i < this->ListaFruta->Count; i++){
		Fruta^ objFruta = this->ListaFruta[i];
		lineas[i] = objFruta->codigo + ";" + objFruta->nombre + ";" + objFruta->tamaño + ";" + objFruta->color + ";" + objFruta->estado;
	}
	File::WriteAllLines("Fruta.txt", lineas);
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
