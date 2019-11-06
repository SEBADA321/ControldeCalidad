#pragma once

namespace ControlCalidadModel{
	using namespace System;
	public ref class Usuario{
	private:
		int codigo;
		String^ profesion;
		String^ nombres;
		String^ apellidos;
	public:
		Usuario();
		Usuario(int codigo, String^ profesion, String^ nombres, String^ apellidos);
	};
}