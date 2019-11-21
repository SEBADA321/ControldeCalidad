#pragma once
#include "frmManteFruta.h"
#include "VentanaSerial.h"
#include "frmIniciarProceso.h"
#include "MantenimientoUsuarios.h"
#include "MantLote.h"
#include "VerProceso.h"

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
	public: bool minmax;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: GestorLote^ objGestorLote;
	private: Usuario^ usuario;
	private:  VerProceso^ frmVerProceso;
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
	private: System::Windows::Forms::ToolStripMenuItem^  cerrarToolStripMenuItem;

	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->frutaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sistemaFajaDistribuidoraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->produccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurarPuertoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarPuertoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->procesosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verProcesosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lb_test = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
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
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5){
				this->frutaToolStripMenuItem,
					this->usuarioToolStripMenuItem, this->sistemaFajaDistribuidoraToolStripMenuItem, this->produccionToolStripMenuItem, this->cerrarToolStripMenuItem
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
			// cerrarToolStripMenuItem
			// 
			this->cerrarToolStripMenuItem->Name = L"cerrarToolStripMenuItem";
			this->cerrarToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->cerrarToolStripMenuItem->Text = L"Cerrar";
			this->cerrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cerrarToolStripMenuItem_Click);
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
			this->verProcesosToolStripMenuItem->Enabled = false;
			this->verProcesosToolStripMenuItem->Name = L"verProcesosToolStripMenuItem";
			this->verProcesosToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->verProcesosToolStripMenuItem->Text = L"Ver Procesos";
			this->verProcesosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::verProcesosToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPrincipal::timer1_Tick);
			// 
			// lb_test
			// 
			this->lb_test->AutoSize = true;
			this->lb_test->Location = System::Drawing::Point(734, 484);
			this->lb_test->Name = L"lb_test";
			this->lb_test->Size = System::Drawing::Size(35, 13);
			this->lb_test->TabIndex = 2;
			this->lb_test->Text = L"label1";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2){
				this->toolStripProgressBar1,
					this->toolStripStatusLabel1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 518);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::ManagerRenderMode;
			this->statusStrip1->Size = System::Drawing::Size(819, 22);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->Stretch = false;
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->toolStripProgressBar1->ToolTipText = L"Progreso";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(819, 540);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->lb_test);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Sistema control de calidad PUCP";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPrincipal::frmPrincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::VentanaP_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VentanaP_Load(System::Object^  sender, System::EventArgs^  e){
		if (this->admin == true){
			this->usuarioToolStripMenuItem->Enabled = true;
		}
		this->lb_test->Text = "Recibir serial";
		this->timer1->Interval = 10;
		this->toolStripProgressBar1->Visible = false;
		this->toolStripStatusLabel1->Visible = false;
		this->toolStripStatusLabel1->Text = "";
		this->minmax = true;
	}

	private: System::Void frutaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		frmManteFruta^ventanaMantFruta = gcnew frmManteFruta();
		ventanaMantFruta->MdiParent = this;
		ventanaMantFruta->Show();
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
				this->toolStripProgressBar1->Value = this->frmVerProceso->Obtener_Serial(this->serialPort->ReadLine());
				this->toolStripStatusLabel1->Text = (Convert::ToDouble(this->toolStripProgressBar1->Value) * 100 / Convert::ToDouble(this->toolStripProgressBar1->Maximum)).ToString("F1") + "%";

				if (this->timer1->Enabled){
					this->lb_test->Text = "Funcionando";
				} else{
					this->lb_test->Text = "No funcionando";
				}
			} catch (TimeoutException^){
			}
		}
	}

	private: System::Void configurarPuertoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		VentanaSerial^ ventanaserial = gcnew VentanaSerial(this->serialPort, this->cerrarPuertoToolStripMenuItem, this->timer1);
		ventanaserial->ShowDialog();
	}

	private: System::Void iniciarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		if (this->serialPort->IsOpen){
			frmIniciarProceso^ VentanaIniciar = gcnew frmIniciarProceso(this->usuario);
			if (VentanaIniciar->ShowDialog() == System::Windows::Forms::DialogResult::OK){
				this->iniciarToolStripMenuItem->Enabled = !VentanaIniciar->procIniciado;
				this->frmVerProceso = gcnew VerProceso(this->timer1, VentanaIniciar->objLote);
				this->frmVerProceso->MdiParent = this;
				this->verProcesosToolStripMenuItem->Enabled = true;
				this->timer1->Start();
				this->toolStripProgressBar1->Maximum = VentanaIniciar->objLote->ListaFruta->Count;
				this->toolStripProgressBar1->Visible = true;
				this->toolStripStatusLabel1->Visible = true;
				this->toolStripStatusLabel1->Text = "0%";
			}
		} else{
			System::Windows::Forms::DialogResult r = MessageBox::Show("Debe abrir un puerto primero", "Aviso", System::Windows::Forms::MessageBoxButtons::YesNo);
			if (r == System::Windows::Forms::DialogResult::Yes){
				VentanaSerial^ ventanaserial = gcnew VentanaSerial(this->serialPort, this->cerrarPuertoToolStripMenuItem, this->timer1);
				ventanaserial->ShowDialog();
			}
		}
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
	private: System::Void verProcesosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		this->frmVerProceso->Show();
	}
	private: System::Void cerrarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		System::Windows::Forms::DialogResult r = MessageBox::Show("Confirmar cerrar", "Aviso", System::Windows::Forms::MessageBoxButtons::YesNo);
		if (r == System::Windows::Forms::DialogResult::Yes){
			this->minmax = false;
			this->Close();
		}
	}
	private: System::Void frmPrincipal_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e){
		e->Cancel = true;
		this->Hide();
	}
	};
}
