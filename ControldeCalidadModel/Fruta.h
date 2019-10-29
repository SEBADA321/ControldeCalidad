#pragma once

namespace ControlCalidadModel{
	using namespace System;
	public ref class Fruta{
	public:
		int codigo;
		String^ nombre;
		String^ tamaño;
		String^ color;
		String^ estado;
	public:
		Fruta();
		Fruta(int codigo, String^ nombre, String^ tamaño, String^ color, String^ estado);
	};
}