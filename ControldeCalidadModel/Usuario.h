#pragma once

namespace ControlCalidadModel{
	using namespace System;
	[Serializable]
	public ref class Usuario{
	public:
		int codigo;
		String^ profesion;
		String^ nombres;
		String^ apellidos;
		String^ password;
	public:
		Usuario();
		Usuario(int codigo, String^ profesion, String^ nombres, String^ apellidos, String^ password);
	};
}