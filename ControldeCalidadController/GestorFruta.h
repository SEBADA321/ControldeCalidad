#pragma once

namespace ControldeCalidadController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace ControlCalidadModel;

	public ref class GestorFruta {
	private:
		List<Fruta^>^ ListaFruta;

	public:
		GestorFruta();
		void AgregarFruta(Fruta^ objFruta);
		void EliminarFruta(int index);
		void LeerFrutaDesdeArchivo();
		int ObtenerCantidadFruta();
		Fruta^ ObtenerFruta(int index);
		void EliminarFrutaxCodigo(int id);
		void EscribirFrutaEnArchivo();
		Fruta^ ObtenerFrutaxCodigo(int id);
		List<Fruta^>^ BuscarFrutaxNombre(String^ nombre);
		void Serializar();
		void Deserializar();
	};

}