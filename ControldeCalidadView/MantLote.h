#pragma once
#include "NuevoLote.h"

namespace ControldeCalidadView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ControlCalidadModel;
	using namespace ControldeCalidadController;

	/// <summary>
	/// Summary for MantLote
	/// </summary>
	public ref class MantLote : public System::Windows::Forms::Form
	{
	public:
		MantLote(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MantLote(GestorLote^ objGestorLote){
			InitializeComponent();
			this->objGestorLote = objGestorLote;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MantLote()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	private: GestorLote^ objGestorLote;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button1;






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5){
				this->Column1,
					this->Column4, this->Column2, this->Column3, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(49, 166);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(548, 167);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"N°Lote";
			this->Column4->Name = L"Column4";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Estado";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha";
			this->Column3->Name = L"Column3";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"N°Frutas";
			this->Column5->Name = L"Column5";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(280, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantLote::button1_Click);
			// 
			// MantLote
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 416);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MantLote";
			this->Text = L"MantLote";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MantLote::MantLote_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MantLote::MantLote_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MantLote_Load(System::Object^  sender, System::EventArgs^  e){
		MostrarGrilla();
	}

	private: void MostrarGrilla(){
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorLote->ListaLote->Count; i++){
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(this->objGestorLote->ListaLote[i]->codigo);
			fila[1] = Convert::ToString(this->objGestorLote->ListaLote[i]->NroLote);
			fila[2] = this->objGestorLote->ListaLote[i]->EstadoLote;
			fila[3] = this->objGestorLote->ListaLote[i]->FechaProduccion;
			fila[4] = Convert::ToString(this->objGestorLote->ListaLote[i]->ListaFruta->Count);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		NuevoLote^ VentanaNuevoLote = gcnew NuevoLote();
		VentanaNuevoLote->Show();
		this->objGestorLote->AgregarLote(VentanaNuevoLote->nLote);
	}
private: System::Void MantLote_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e){
	this->objGestorLote->Serializar();
}
};
}
