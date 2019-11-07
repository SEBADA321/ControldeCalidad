#pragma once

using namespace System;
using namespace ControlCalidadModel;
using namespace System::Collections::Generic;

namespace ControldeCalidadController{

	public ref class GestorFruta{
	public:
		List<Fruta^>^ ListaFruta;

	public:
		GestorFruta();
		void AgregarFruta(Fruta^ objFruta);
		void EliminarFruta(int index);
		int ObtenerCantidadFruta();
		Fruta^ ObtenerFruta(int index);
		void EliminarFrutaxCodigo(int id);
		Fruta^ ObtenerFrutaxCodigo(int id);
		List<Fruta^>^ BuscarFrutaxNombre(String^ nombre);
		void Serializar();
		void Deserializar();
	};

}