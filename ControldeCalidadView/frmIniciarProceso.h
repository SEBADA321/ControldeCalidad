#pragma once

namespace ControldeCalidadView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ControlCalidadModel;
	using namespace ControldeCalidadController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for frmIniciarProceso
	/// </summary>
	public ref class frmIniciarProceso : public System::Windows::Forms::Form
	{
	public:
		frmIniciarProceso(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmIniciarProceso(GestorLote^ objGestorLote, Usuario^ usuario){
			InitializeComponent();
			this->objGestorLote = objGestorLote;
			this->usuario = usuario;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmIniciarProceso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: GestorLote^ objGestorLote;
	public: bool procIniciado = false;//SALIDA
	private: Usuario^ usuario;
	private: System::Windows::Forms::Label^  label2;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccionar Lote:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(144, 75);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// frmIniciarProceso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 362);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmIniciarProceso";
			this->Text = L"frmIniciarProceso";
			this->Load += gcnew System::EventHandler(this, &frmIniciarProceso::frmIniciarProceso_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmIniciarProceso_Load(System::Object^  sender, System::EventArgs^  e){
		this->textBox1->Text = this->usuario->nombres;
		this->comboBox1->Items->Clear();
		List<Lote^>^ ListadeLotes = this->objGestorLote->ObtenerLotexEstadoLote("Sin procesar");
		for (int i = 0; i < ListadeLotes->Count; i++){
			this->comboBox1->Items->Add(ListadeLotes[i]->codigo);
		}

	}
	};
}
