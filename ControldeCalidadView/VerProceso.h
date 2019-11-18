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
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: int frutas_proc;
	private: int frutas_descartadas;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Frutas procesadas:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Descartadas:";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(205, 31);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(150, 23);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(15, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(422, 171);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Lote";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"N° Frutas:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(15, 212);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(437, 205);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Información frutas";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(121, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(44, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(361, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"test";
			// 
			// textBox1
			// 
			this->textBox1->CausesValidation = false;
			this->textBox1->Location = System::Drawing::Point(121, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TabStop = false;
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
	private: System::Void DecodificarSerial(String^ serial_rec){
		this->data_serial = serial_rec;
		this->frutas_proc = Convert::ToInt32(serial_rec);
		this->frutas_descartadas = 0;
	}
	private: System::Void VerProceso_Load(System::Object^  sender, System::EventArgs^  e){
		this->timer1->Start();
		this->textBox1->Text = "";
		this->textBox2->Text = Convert::ToString(this->lote_proc->ListaFruta->Count);
		this->progressBar1->Maximum = this->lote_proc->ListaFruta->Count;
		this->label4->Text = "";
	}
	private: System::Void ActualizarBarra(){
		this->progressBar1->Value = this->frutas_proc;
		this->label4->Text = (Convert::ToDouble(this->progressBar1->Value)*100 / Convert::ToDouble(this->progressBar1->Maximum)).ToString("F1")+"%";
	}

	public: System::Void Obtener_Serial(String^ serial_rec){
		this->DecodificarSerial(serial_rec);
		this->textBox1->Text = Convert::ToString(this->frutas_proc);
		this->textBox3->Text = Convert::ToString(this->frutas_descartadas);
		this->ActualizarBarra();
	}
	private: System::Void VerProceso_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e){
		this->Hide();
		e->Cancel = true;
	}
};
}
