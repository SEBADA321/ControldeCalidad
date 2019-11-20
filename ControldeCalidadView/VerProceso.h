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

	/// <summary>
	/// Summary for VerProceso
	/// </summary>
	public ref class VerProceso: public System::Windows::Forms::Form{
	public:
		VerProceso(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VerProceso(System::Windows::Forms::Timer^  timer1, Lote^ lote_proc){
			InitializeComponent();
			this->timer1 = timer1;
			this->lote_proc = lote_proc;
			this->frutas_proc_prev = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VerProceso(){
			if (components){
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: String^ data_serial;
	private: Lote^ lote_proc;
	private: String^ fruta_estado;
	private: String^ fruta_color;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: int frutas_proc;
	private: int frutas_proc_prev;
	private: int frutas_descartadas;
	private: double frutas_tamano_prom;
	private: double frutas_tamano;
	private: int contador;
	private: System::Windows::Forms::TextBox^  tb_estado;

	private: System::Windows::Forms::TextBox^  tb_nro_lote;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	public:
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void){
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VerProceso::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_estado = (gcnew System::Windows::Forms::TextBox());
			this->tb_nro_lote = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Frutas procesadas:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Descartadas:";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(171, 29);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(150, 23);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->tb_estado);
			this->groupBox1->Controls->Add(this->tb_nro_lote);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(456, 182);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Lote";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(112, 30);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(60, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Usuario:";
			// 
			// tb_estado
			// 
			this->tb_estado->Location = System::Drawing::Point(112, 82);
			this->tb_estado->Name = L"tb_estado";
			this->tb_estado->ReadOnly = true;
			this->tb_estado->Size = System::Drawing::Size(100, 20);
			this->tb_estado->TabIndex = 5;
			this->tb_estado->TabStop = false;
			// 
			// tb_nro_lote
			// 
			this->tb_nro_lote->Location = System::Drawing::Point(112, 56);
			this->tb_nro_lote->Name = L"tb_nro_lote";
			this->tb_nro_lote->ReadOnly = true;
			this->tb_nro_lote->Size = System::Drawing::Size(100, 20);
			this->tb_nro_lote->TabIndex = 4;
			this->tb_nro_lote->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(63, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Estado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(60, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"N° Lote:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 108);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"N° Frutas:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(12, 200);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(456, 221);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Información frutas";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(121, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(44, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(327, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"test";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(121, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Tamaño Promedio:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(121, 82);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(44, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->TabStop = false;
			// 
			// VerProceso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 433);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VerProceso";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Proceso";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VerProceso::VerProceso_FormClosing);
			this->Load += gcnew System::EventHandler(this, &VerProceso::VerProceso_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		/*	
		Se separa en partes utiles para asignar a los atributos del lote y sus frutas.
		Tambien se usará para monitorear los sensores
		*/
	private: System::Void DecodificarSerial(String^ serial_rec){//
		this->data_serial = serial_rec;
		this->frutas_proc = Convert::ToInt32(serial_rec);
		this->frutas_descartadas = 0;
		this->frutas_tamano = 15.0;
		this->fruta_estado = "";
		this->fruta_color = "";
	}
		/*
		Función publica usada desde frmPrincipal para obtener datos del puerto serial
		*/
	public: int Obtener_Serial(String^ serial_rec){
		this->DecodificarSerial(serial_rec);
		this->ActualizarBarra();
		this->textBox1->Text = Convert::ToString(this->frutas_proc);
		this->textBox3->Text = Convert::ToString(this->frutas_descartadas);
		if (this->frutas_proc <= this->lote_proc->ListaFruta->Count && this->frutas_proc >= 1){
			this->lote_proc->ListaFruta[this->frutas_proc - 1]->estado = this->fruta_estado;
			this->lote_proc->ListaFruta[this->frutas_proc - 1]->tamaño = Convert::ToInt32(this->frutas_tamano);
			this->lote_proc->ListaFruta[this->frutas_proc - 1]->color = this->fruta_color;
		}
		this->label4->Text = (Convert::ToDouble(this->progressBar1->Value) * 100 / Convert::ToDouble(this->progressBar1->Maximum)).ToString("F1") + "%";
		if (this->frutas_proc == this->lote_proc->ListaFruta->Count){
			this->tb_estado->Text = "Procesado";
			this->timer1->Stop();
			this->lote_proc->EstadoLote = this->tb_estado->Text;
			this->lote_proc->NroFrutasNoPodridas = this->frutas_proc - this->frutas_descartadas;
			this->lote_proc->NroFrutasPodridas = this->frutas_descartadas;
		}
		this->frutas_tamano_prom = ((this->frutas_tamano_prom*(Convert::ToDouble(this->contador - 1)) + this->frutas_tamano) / Convert::ToDouble(this->contador));
		this->textBox5->Text = frutas_tamano_prom.ToString("F1");
		this->contador++;
		return this->frutas_proc;
	}
	private: System::Void VerProceso_Load(System::Object^  sender, System::EventArgs^  e){
		this->timer1->Start();
		this->textBox1->Text = "";
		this->textBox2->Text = Convert::ToString(this->lote_proc->ListaFruta->Count);
		this->progressBar1->Maximum = this->lote_proc->ListaFruta->Count;
		this->label4->Text = "";
		this->tb_nro_lote->Text = Convert::ToString(this->lote_proc->NroLote);
		this->tb_estado->Text = this->lote_proc->EstadoLote;
		this->textBox4->Text = this->lote_proc->usuario->nombres;
		this->frutas_tamano_prom = 0;
		this->contador = 1;
	}
	private: System::Void ActualizarBarra(){
		if ((this->frutas_proc > this->frutas_proc_prev) && (this->frutas_proc <= this->lote_proc->ListaFruta->Count)){
			this->progressBar1->Value = this->frutas_proc;
			this->frutas_proc_prev = this->frutas_proc;
		}
	}
	private: System::Void VerProceso_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e){
		this->Hide();
		e->Cancel = true;
	}
	};
}
