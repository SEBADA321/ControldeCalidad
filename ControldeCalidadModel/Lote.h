#pragma once
#include "Fruta.h"
#include "Usuario.h"

namespace ControlCalidadModel{
	using namespace System;
	using namespace System::Collections::Generic;
	[Serializable]
	public ref class Lote{
	private:
		int codigoLote;
		String^ EstadoProducto;
		int NroFrutasPodridas;
		int NroFrutasNoPodridas;
		int NroLote;
		List<Fruta^>^ListaFruta;
		String^ FechaProduccion;
		Usuario^ usuario;
	public:
		Lote();
		Lote(int, String^, int, int, int, List<Fruta^>^, String^, Usuario^);
	};
}