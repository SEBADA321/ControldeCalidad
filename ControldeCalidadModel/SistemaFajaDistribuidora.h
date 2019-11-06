#pragma once
#include "Usuario.h"

namespace ControlCalidadModel{
	using namespace System;
	public ref class SistemaFajaDistribuidora{
	private:
		int codigo;
		String^ EstadoSistema;
		String^ Operacion;
		Usuario^ usuario;
	public:
		SistemaFajaDistribuidora(int codigo, String^ EstadoSistema, String^ Operacion, Usuario^ usuario);
		SistemaFajaDistribuidora();
	};
}