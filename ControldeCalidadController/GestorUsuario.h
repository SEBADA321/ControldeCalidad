#pragma once

using namespace ControlCalidadModel;
using namespace System;
using namespace System::Collections::Generic;

namespace ControldeCalidadController{

	public ref class GestorUsuario{
	public:
		List<Usuario^>^ ListaUsuarios;

	public:
		GestorUsuario();
		void AgregarUsuario(Usuario^ objUsuario);
		void EliminarUsuario(int index);
		int ObtenerCantidadUsuarios();
		Usuario^ ObtenerUsuario(int index);
		void EliminarUsuarioxCodigo(int id);
		Usuario^ ObtenerUsuarioxNombre(String^ Nombre);
		Usuario ^ ObtenerUsuarioxCodigo(int codigo);
		void Serializar();
		void Deserializar();
	};

}