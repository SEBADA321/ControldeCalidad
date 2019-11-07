#pragma once

namespace ControlCalidadModel{
	using namespace System;
	[Serializable]
	public ref class SensorDistancia{
	public:
		int RangoDistancia;
	public:
		SensorDistancia(int RangoDistancia);
		SensorDistancia();
	};
}