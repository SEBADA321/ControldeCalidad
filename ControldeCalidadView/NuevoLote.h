#pragma once
#include "frmAgregarFruta.h"

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
	/// Summary for NuevoLote
	/// </summary>
	public ref class NuevoLote: public System::Windows::Forms::Form{
	public:
		NuevoLote(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NuevoLote(GestorLote^ objGestorLote){
			InitializeComponent();
			this->objGestorLote = objGestorLote;
			if (objGestorLote->ListaLote->Count == 0){
				this->codigo_prev = 0;
			} else{
				this->codigo_prev = objGestorLote->ListaLote[objGestorLote->ListaLote->Count - 1]->codigo;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NuevoLote(){
			if (components){
				delete components;
			}
		}

	private:
	private: GestorLote^ objGestorLote;
	private: int codigo_prev;
	private: List<Fruta^>^ ListaFruta;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	public:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
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
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NuevoLote::typeid));
				 this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				 this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				 this->groupBox1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // dataGridView1
				 // 
				 this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																								   | System::Windows::Forms::AnchorStyles::Left)
																								  | System::Windows::Forms::AnchorStyles::Right));
				 this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2){
					 this->Column1,
						 this->Column2
				 });
				 this->dataGridView1->Location = System::Drawing::Point(6, 19);
				 this->dataGridView1->Name = L"dataGridView1";
				 this->dataGridView1->Size = System::Drawing::Size(292, 218);
				 this->dataGridView1->TabIndex = 5;
				 // 
				 // Column1
				 // 
				 this->Column1->HeaderText = L"Codigo";
				 this->Column1->Name = L"Column1";
				 // 
				 // Column2
				 // 
				 this->Column2->HeaderText = L"Nombre";
				 this->Column2->Name = L"Column2";
				 // 
				 // button1
				 // 
				 this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->button1->Location = System::Drawing::Point(304, 117);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(103, 23);
				 this->button1->TabIndex = 6;
				 this->button1->Text = L"Agregar fruta";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &NuevoLote::button1_Click);
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							   | System::Windows::Forms::AnchorStyles::Left)
																							  | System::Windows::Forms::AnchorStyles::Right));
				 this->groupBox1->Controls->Add(this->button1);
				 this->groupBox1->Controls->Add(this->dataGridView1);
				 this->groupBox1->Location = System::Drawing::Point(12, 128);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(414, 243);
				 this->groupBox1->TabIndex = 2;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Frutas";
				 // 
				 // button2
				 // 
				 this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->button2->Location = System::Drawing::Point(182, 377);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 23);
				 this->button2->TabIndex = 7;
				 this->button2->Text = L"Guardar";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &NuevoLote::button2_Click);
				 // 
				 // label1
				 // 
				 this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(96, 40);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(43, 13);
				 this->label1->TabIndex = 4;
				 this->label1->Text = L"Estado:";
				 // 
				 // label2
				 // 
				 this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(96, 67);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(43, 13);
				 this->label2->TabIndex = 5;
				 this->label2->Text = L"N°Lote:";
				 // 
				 // label3
				 // 
				 this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(96, 14);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(43, 13);
				 this->label3->TabIndex = 6;
				 this->label3->Text = L"Código:";
				 // 
				 // textBox1
				 // 
				 this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							  | System::Windows::Forms::AnchorStyles::Left)
																							 | System::Windows::Forms::AnchorStyles::Right));
				 this->textBox1->Location = System::Drawing::Point(142, 11);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(121, 20);
				 this->textBox1->TabIndex = 1;
				 this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NuevoLote::textBox1_KeyPress);
				 // 
				 // textBox3
				 // 
				 this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							  | System::Windows::Forms::AnchorStyles::Left)
																							 | System::Windows::Forms::AnchorStyles::Right));
				 this->textBox3->Location = System::Drawing::Point(142, 64);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(121, 20);
				 this->textBox3->TabIndex = 3;
				 this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NuevoLote::textBox3_KeyPress);
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							   | System::Windows::Forms::AnchorStyles::Left)
																							  | System::Windows::Forms::AnchorStyles::Right));
				 this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2){ L"Sin procesar", L"Procesado" });
				 this->comboBox1->Location = System::Drawing::Point(142, 37);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(121, 21);
				 this->comboBox1->TabIndex = 2;
				 // 
				 // dateTimePicker1
				 // 
				 this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																									 | System::Windows::Forms::AnchorStyles::Left)
																									| System::Windows::Forms::AnchorStyles::Right));
				 this->dateTimePicker1->Location = System::Drawing::Point(142, 90);
				 this->dateTimePicker1->Name = L"dateTimePicker1";
				 this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
				 this->dateTimePicker1->TabIndex = 4;
				 // 
				 // label4
				 // 
				 this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(96, 96);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(40, 13);
				 this->label4->TabIndex = 12;
				 this->label4->Text = L"Fecha:";
				 // 
				 // NuevoLote
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(438, 411);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->dateTimePicker1);
				 this->Controls->Add(this->comboBox1);
				 this->Controls->Add(this->textBox3);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->groupBox1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				 this->Name = L"NuevoLote";
				 this->ShowInTaskbar = false;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Nuevo Lote";
				 this->Load += gcnew System::EventHandler(this, &NuevoLote::NuevoLote_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				 this->groupBox1->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: void MostrarGrilla(){
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->ListaFruta->Count; i++){
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(this->ListaFruta[i]->codigo);
			fila[1] = this->ListaFruta[i]->nombre;
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e){
		if (!(this->textBox1->Text == "" || this->textBox3->Text == "" || this->ListaFruta->Count == 0 ||
			  this->comboBox1->SelectedIndex == -1)){
			Lote^ nLote = gcnew Lote();
			nLote->codigo = Convert::ToInt32(this->textBox1->Text);
			nLote->NroLote = Convert::ToInt32(this->textBox3->Text);
			nLote->EstadoLote = this->comboBox1->Text;
			nLote->FechaProduccion = this->dateTimePicker1->Text;
			nLote->ListaFruta = this->ListaFruta;
			this->objGestorLote->AgregarLote(nLote);
			this->Close();
		} else{
			MessageBox::Show("Completar todos los campos", "Aviso");
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		frmAgregarFruta^ VentanaNuevaFruta = gcnew frmAgregarFruta(this->ListaFruta);
		VentanaNuevaFruta->ShowDialog();
		MostrarGrilla();
	}
	private: System::Void NuevoLote_Load(System::Object^  sender, System::EventArgs^  e){
		this->textBox1->Text = Convert::ToString(this->codigo_prev + 1);
		this->comboBox1->SelectedIndex = 0;
		this->ListaFruta = gcnew List<Fruta^>();
		this->ListaFruta->Clear();
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e){
		if ((!Char::IsDigit(e->KeyChar) && (e->KeyChar != 0x08)) && (e->KeyChar != 0x0D)){
			e->Handled = true;
		}
	}
	private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e){
		if ((!Char::IsDigit(e->KeyChar) && (e->KeyChar != 0x08)) && (e->KeyChar != 0x0D)){
			e->Handled = true;
		}
	}
	};
}
