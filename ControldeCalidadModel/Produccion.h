#pragma once
#include "Fruta.h"

namespace ControlCalidadModel{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Produccion{
	private:
		int codigoLote;
		String^ EstadoProducto;
		int NroFrutasPodridas;
		int NroFrutasNoPodridas;
		int NroLote;
		List<Fruta^>^ListaFruta;
		String^ FechaProduccion;
	public:
		Produccion(int codigoLote, String^ EstadoProducto, int NroFrutasPodridas, int NroFrutasNoPodridas, int NroLote, String^ FechaProduccion);
	};
}