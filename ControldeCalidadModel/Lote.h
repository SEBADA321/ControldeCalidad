#pragma once
#include "Fruta.h"
#include "Usuario.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace ControlCalidadModel;

namespace ControlCalidadModel{
	[Serializable]
	public ref class Lote{
	public:
		int codigo;
		String^ EstadoLote;
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