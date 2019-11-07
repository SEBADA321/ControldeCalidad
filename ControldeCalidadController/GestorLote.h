#pragma once

using namespace ControlCalidadModel;
using namespace System;
using namespace System::Collections::Generic;

namespace ControldeCalidadController{

	public ref class GestorLote{
	public:
		List<Lote^>^ ListaLote;

	public:
		GestorLote();
		void AgregarLote(Lote^ objLote);
		void EliminarLote(int index);
		int ObtenerCantidadLotes();
		Lote^ ObtenerLote(int index);
		void EliminarLotexCodigo(int);
		Lote^ ObtenerLotexCodigo(int);
		List<Lote^>^ ObtenerLotexUsuario(Usuario^);
		List<Lote^>^ ObtenerLotexEstadoLote(String^);
		List<Lote^>^ BuscarLotexFechaProduccion(String ^ fecha);
		void Serializar();
		void Deserializar();
	};

}