#pragma once

namespace ControlCalidadModel{
	using namespace System;
	[Serializable]
	public ref class DispositivosConfigurables{
	public:
		int codigoOperacion;
	public:
		DispositivosConfigurables(int codigoOperacion);
	};
}