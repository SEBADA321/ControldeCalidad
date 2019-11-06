#pragma once

namespace ControlCalidadModel{
	using namespace System;
	[Serializable]
	public ref class Fruta{
	public:
		int codigo;
		String^ nombre;
		int tamaño;
		String^ color;
		String^ estado;
	public:
		Fruta();
		Fruta(int codigo, String^ nombre, int tamaño, String^ color, String^ estado);
	};
}