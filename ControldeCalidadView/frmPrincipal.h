#pragma once
#include "frmManteFruta.h"
#include "VentanaSerial.h"
#include "frmIniciarProceso.h"
#include "MantenimientoUsuarios.h"
#include "MantLote.h"

namespace ControldeCalidadView{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ControlCalidadModel;
	using namespace ControldeCalidadController;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal: public System::Windows::Forms::Form{
	public:
		frmPrincipal(void){
			InitializeComponent();
			this->objGestorLote = gcnew GestorLote();
			this->iniciarToolStripMenuItem->Enabled = false;
		}
		frmPrincipal(Usuario^ usuario){
			InitializeComponent();
			this->objGestorLote = gcnew GestorLote();
			this->usuario = usuario;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal(){
			if (components){
				delete components;
			}
		}
	public: bool admin;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: GestorLote^ objGestorLote;
	private: Usuario^ usuario;
	private: System::Windows::Forms::ToolStripMenuItem^  mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  frutaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  serialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  configurarPuertoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cerrarPuertoToolStripMenuItem;
	private: System::IO::Ports::SerialPort^  serialPort;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  lb_test;
	private: System::Windows::Forms::ToolStripMenuItem^  usuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sistemaFajaDistribuidoraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  produccionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  procesosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iniciarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  verProcesosToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void){
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->frutaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sistemaFajaDistribuidoraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->produccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurarPuertoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarPuertoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->procesosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verProcesosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lb_test = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3){
				this->mantenimientoToolStripMenuItem,
					this->serialToolStripMenuItem, this->procesosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(819, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4){
				this->frutaToolStripMenuItem,
					this->usuarioToolStripMenuItem, this->sistemaFajaDistribuidoraToolStripMenuItem, this->produccionToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// frutaToolStripMenuItem
			// 
			this->frutaToolStripMenuItem->Name = L"frutaToolStripMenuItem";
			this->frutaToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->frutaToolStripMenuItem->Text = L"Fruta";
			this->frutaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::frutaToolStripMenuItem_Click);
			// 
			// usuarioToolStripMenuItem
			// 
			this->usuarioToolStripMenuItem->Enabled = false;
			this->usuarioToolStripMenuItem->Name = L"usuarioToolStripMenuItem";
			this->usuarioToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->usuarioToolStripMenuItem->Text = L"Usuario";
			this->usuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuarioToolStripMenuItem_Click);
			// 
			// sistemaFajaDistribuidoraToolStripMenuItem
			// 
			this->sistemaFajaDistribuidoraToolStripMenuItem->Name = L"sistemaFajaDistribuidoraToolStripMenuItem";
			this->sistemaFajaDistribuidoraToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->sistemaFajaDistribuidoraToolStripMenuItem->Text = L"SistemaFajaDistribuidora";
			// 
			// produccionToolStripMenuItem
			// 
			this->produccionToolStripMenuItem->Name = L"produccionToolStripMenuItem";
			this->produccionToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->produccionToolStripMenuItem->Text = L"Lote";
			this->produccionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::produccionToolStripMenuItem_Click);
			// 
			// serialToolStripMenuItem
			// 
			this->serialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2){
				this->configurarPuertoToolStripMenuItem,
					this->cerrarPuertoToolStripMenuItem
			});
			this->serialToolStripMenuItem->Name = L"serialToolStripMenuItem";
			this->serialToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->serialToolStripMenuItem->Text = L"Serial";
			// 
			// configurarPuertoToolStripMenuItem
			// 
			this->configurarPuertoToolStripMenuItem->Name = L"configurarPuertoToolStripMenuItem";
			this->configurarPuertoToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->configurarPuertoToolStripMenuItem->Text = L"Configurar puerto";
			this->configurarPuertoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configurarPuertoToolStripMenuItem_Click);
			// 
			// cerrarPuertoToolStripMenuItem
			// 
			this->cerrarPuertoToolStripMenuItem->Enabled = false;
			this->cerrarPuertoToolStripMenuItem->Name = L"cerrarPuertoToolStripMenuItem";
			this->cerrarPuertoToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->cerrarPuertoToolStripMenuItem->Text = L"Cerrar puerto";
			this->cerrarPuertoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cerrarPuertoToolStripMenuItem_Click);
			// 
			// procesosToolStripMenuItem
			// 
			this->procesosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2){
				this->iniciarToolStripMenuItem,
					this->verProcesosToolStripMenuItem
			});
			this->procesosToolStripMenuItem->Name = L"procesosToolStripMenuItem";
			this->procesosToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->procesosToolStripMenuItem->Text = L"Procesos";
			// 
			// iniciarToolStripMenuItem
			// 
			this->iniciarToolStripMenuItem->Name = L"iniciarToolStripMenuItem";
			this->iniciarToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->iniciarToolStripMenuItem->Text = L"Iniciar";
			this->iniciarToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::iniciarToolStripMenuItem_Click);
			// 
			// verProcesosToolStripMenuItem
			// 
			this->verProcesosToolStripMenuItem->Name = L"verProcesosToolStripMenuItem";
			this->verProcesosToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->verProcesosToolStripMenuItem->Text = L"Ver Procesos";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPrincipal::timer1_Tick);
			// 
			// lb_test
			// 
			this->lb_test->AutoSize = true;
			this->lb_test->Location = System::Drawing::Point(517, 204);
			this->lb_test->Name = L"lb_test";
			this->lb_test->Size = System::Drawing::Size(35, 13);
			this->lb_test->TabIndex = 2;
			this->lb_test->Text = L"label1";
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 540);
			this->Controls->Add(this->lb_test);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L" ";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmPrincipal::frmPrincipal_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::VentanaP_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frutaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		frmManteFruta^ventanaMantFruta = gcnew frmManteFruta();
		ventanaMantFruta->MdiParent = this;
		ventanaMantFruta->Show();
	}
	private: System::Void VentanaP_Load(System::Object^  sender, System::EventArgs^  e){
		if (this->admin == true){
			this->usuarioToolStripMenuItem->Enabled = true;
		}
		this->lb_test->Text = "Recibir serial";
		this->timer1->Interval = 10;
		this->objGestorLote->Deserializar();
		this->objGestorLote->ListaLote->Clear();
		this->objGestorLote->Serializar();
	}

			 //cierra el puerto
	private: System::Void cerrarPuertoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		this->serialPort->Close();
		this->cerrarPuertoToolStripMenuItem->Enabled = false;
		this->timer1->Stop();
	}

			 //recive datos del puerto seleccionado cada cierto tiempo
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e){
		if (this->serialPort->BytesToRead > 0){
			try{
				this->lb_test->Text = this->serialPort->ReadLine();
			} catch (TimeoutException^){
				this->lb_test->Text = "Error";
			}
		}
	}
	private: System::Void configurarPuertoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		VentanaSerial^ ventanaserial = gcnew VentanaSerial(this->serialPort, this->cerrarPuertoToolStripMenuItem, this->timer1);
		ventanaserial->ShowDialog();
	}
	private: System::Void iniciarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		frmIniciarProceso^ VentanaIniciar = gcnew frmIniciarProceso(this->objGestorLote, this->usuario);
		VentanaIniciar->MdiParent = this;
		VentanaIniciar->Show();
		this->iniciarToolStripMenuItem->Enabled = VentanaIniciar->procIniciado;
		this->timer1->Stop();
	}
	private: System::Void usuarioToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		MantenimientoUsuarios^ VentanaMantUsuarios = gcnew MantenimientoUsuarios();
		VentanaMantUsuarios->MdiParent = this;
		VentanaMantUsuarios->Show();
	}
private: System::Void produccionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
	MantLote^ VentanaMantLote = gcnew MantLote(this->objGestorLote);
	VentanaMantLote->MdiParent = this;
	VentanaMantLote->Show();
}
private: System::Void frmPrincipal_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e){
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
}
};
}
