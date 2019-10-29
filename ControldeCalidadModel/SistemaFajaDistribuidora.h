#pragma once

namespace ControlCalidadModel{
	using namespace System;
	public ref class SistemaFajaDistribuidora{
	private:
		int codigo;
		String^ EstadoSistema;
		String^ Operacion;
		String^ operario;
	public:
		SistemaFajaDistribuidora(int codigo, String^ EstadoSistema, String^ Operacion, String^ Operario);
	};
}