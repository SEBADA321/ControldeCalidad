#include "GestorUsuario.h"

using namespace ControlCalidadModel;
using namespace ControldeCalidadController;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorUsuario::GestorUsuario(){
	this->ListaUsuarios = gcnew List<Usuario^>();
}

void GestorUsuario::AgregarUsuario(Usuario^ objUsuario){
	this->ListaUsuarios->Add(objUsuario);
}

void GestorUsuario::EliminarUsuario(int index){
	this->ListaUsuarios->RemoveAt(index);
}

int GestorUsuario::ObtenerCantidadUsuarios(){
	return this->ListaUsuarios->Count;
}

Usuario^ GestorUsuario::ObtenerUsuario(int index){
	return this->ListaUsuarios[index];
}

void GestorUsuario::EliminarUsuarioxCodigo(int id){
	for (int i = 0; i < this->ListaUsuarios->Count; i++){
		if (this->ListaUsuarios[i]->codigo == id){
			this->ListaUsuarios->RemoveAt(i);
			break;
		}
	}
}

Usuario^ GestorUsuario::ObtenerUsuarioxNombre(String^ Nombre){
	Usuario^ objUsuarioEncontrado;
	for (int i = 0; i < this->ListaUsuarios->Count; i++){
		if (this->ListaUsuarios[i]->nombres == Nombre){
			objUsuarioEncontrado = this->ListaUsuarios[i];
			break;
		}
	}
	return objUsuarioEncontrado;
}

Usuario^ GestorUsuario::ObtenerUsuarioxCodigo(int codigo){
	Usuario^ objUsuarioEncontrado;
	for (int i = 0; i < this->ListaUsuarios->Count; i++){
		if (this->ListaUsuarios[i]->codigo == codigo){
			objUsuarioEncontrado = this->ListaUsuarios[i];
			break;
		}
	}
	return objUsuarioEncontrado;
}

void GestorUsuario::Serializar(){
	Stream^ objStream = File::Open("Usuarios.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaUsuarios);
	objStream->Close();
}

void GestorUsuario::Deserializar(){
	Stream^ objStream = File::Open("Usuarios.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaUsuarios = dynamic_cast<List<Usuario^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}