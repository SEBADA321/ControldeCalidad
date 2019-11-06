#pragma once

namespace ControlCalidadModel {
	using namespace System;
	[Serializable]
	public ref class Motor
	{
	public:
		int PotenciaPersonalizada;
		int frecuenciaPersonalizada;
	public:
		Motor(int PotenciaPersonalizada,int frecuenciaPersonalizada);
	};
}