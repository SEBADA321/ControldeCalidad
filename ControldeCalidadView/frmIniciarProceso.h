#pragma once

namespace ControldeCalidadView{

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
	public ref class frmIniciarProceso: public System::Windows::Forms::Form{
	public:
		frmIniciarProceso(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmIniciarProceso(Usuario^ usuario){
			InitializeComponent();
			this->usuario = usuario;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmIniciarProceso(){
			if (components){
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: GestorLote^ objGestorLote;
	public: bool procIniciado = false;//SALIDA
	private: Usuario^ usuario;
	public: Lote^ objLote;
	private: System::Windows::Forms::Label^  label2;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
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
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmIniciarProceso::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
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
			this->textBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(144, 75);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmIniciarProceso::comboBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(37, 102);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(342, 159);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Información del Lote";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(95, 127);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(169, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Fecha:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 104);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"N° Lote:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(95, 101);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"N° Frutas:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Estado:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(95, 77);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(95, 51);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(95, 25);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Código:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(191, 314);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmIniciarProceso::button1_Click);
			// 
			// frmIniciarProceso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 362);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmIniciarProceso";
			this->ShowInTaskbar = false;
			this->Text = L"Iniciar proceso";
			this->Load += gcnew System::EventHandler(this, &frmIniciarProceso::frmIniciarProceso_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmIniciarProceso_Load(System::Object^  sender, System::EventArgs^  e){
		this->objGestorLote = gcnew GestorLote();
		this->objGestorLote->Deserializar();
		this->textBox1->Text = this->usuario->nombres;
		this->comboBox1->Items->Clear();
		List<Lote^>^ ListadeLotes = this->objGestorLote->ObtenerLotexEstadoLote("Sin procesar");
		for (int i = 0; i < ListadeLotes->Count; i++){
			this->comboBox1->Items->Add(ListadeLotes[i]->codigo);
		}

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e){
		this->textBox2->Text = Convert::ToString(this->objGestorLote->ListaLote[this->comboBox1->SelectedIndex]->codigo);
		this->textBox3->Text = this->objGestorLote->ListaLote[this->comboBox1->SelectedIndex]->EstadoLote;
		this->textBox4->Text = Convert::ToString(this->objGestorLote->ListaLote[this->comboBox1->SelectedIndex]->ListaFruta->Count);
		this->textBox5->Text = Convert::ToString(this->objGestorLote->ListaLote[this->comboBox1->SelectedIndex]->NroLote);
		this->textBox6->Text = this->objGestorLote->ListaLote[this->comboBox1->SelectedIndex]->FechaProduccion;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		if (this->comboBox1->SelectedIndex != -1){
			this->objLote = this->objGestorLote->ObtenerLotexCodigo(Convert::ToInt32(this->textBox2->Text));
			this->procIniciado = true;
			this->Close();
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		} else{
			MessageBox::Show("Debe seleccionar un lote");
		}
	}
};
}
