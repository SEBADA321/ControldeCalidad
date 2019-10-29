#pragma once

namespace ControlCalidadModel{
	using namespace System;
	public ref class Usuario{
	private:
		int codigo;
		String^ profesion;
		String^ nombre;
	public:
		Usuario(int codigo, String^ profesion, String^ nombre);
	};
}