#pragma once
#include "frmModificarFruta.h"
#include "frmNuevaFruta.h"

namespace ControldeCalidadView{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ControlCalidadModel;
	using namespace ControldeCalidadController;
	/// <summary>
	/// Resumen de frmManteFruta
	/// </summary>
	public ref class frmManteFruta: public System::Windows::Forms::Form{
	public:
		frmManteFruta(void){
			InitializeComponent();
			this->objGestorFruta = gcnew GestorFruta();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmManteFruta(){
			if (components){
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: GestorFruta^ objGestorFruta;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmManteFruta::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(581, 81);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(463, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmManteFruta::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5){
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(23, 87);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 194);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmManteFruta::dataGridView1_CellDoubleClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tamaño";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Color";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->Name = L"Column5";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmManteFruta::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(249, 303);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmManteFruta::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(492, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmManteFruta::button4_Click);
			// 
			// frmManteFruta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 338);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmManteFruta";
			this->ShowInTaskbar = false;
			this->Text = L"Mantenimiento Fruta";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmManteFruta::frmManteFruta_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmManteFruta::frmManteFruta_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void MostrarGrilla(){
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorFruta->ObtenerCantidadFruta(); i++){
			Fruta^ objFruta = this->objGestorFruta->ObtenerFruta(i);
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objFruta->codigo);
			fila[1] = objFruta->nombre;
			fila[2] = Convert::ToString(objFruta->tamaño);
			fila[3] = objFruta->color;
			fila[4] = objFruta->estado;
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: void MostrarGrilla(List<Fruta^>^ ListaFruta){
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < ListaFruta->Count; i++){
			Fruta^ objFruta = ListaFruta[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objFruta->codigo);
			fila[1] = objFruta->nombre;
			fila[2] = Convert::ToString(objFruta->tamaño);
			fila[3] = objFruta->color;
			fila[4] = objFruta->estado;
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e){
		frmNuevaFruta^ ventanaNuevaFruta = gcnew frmNuevaFruta(this->objGestorFruta);
		ventanaNuevaFruta->ShowDialog();
		MostrarGrilla();
	}
	private: System::Void frmManteFruta_Load(System::Object^  sender, System::EventArgs^  e){
		this->objGestorFruta->Deserializar();
		MostrarGrilla();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e){
		frmModificarFruta^ ventanaModificarFruta = gcnew frmModificarFruta(this->objGestorFruta, Convert::ToInt32(this->dataGridView1->Rows[this->dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value));
		ventanaModificarFruta->ShowDialog();
		MostrarGrilla();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e){
		this->objGestorFruta->EliminarFrutaxCodigo(Convert::ToInt32(this->dataGridView1->Rows[this->dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value));
		MostrarGrilla();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		String^ nombre = this->textBox1->Text;
		if (nombre == ""){
			MostrarGrilla();
		} else{
			List<Fruta^>^ ListaFruta = this->objGestorFruta->BuscarFrutaxNombre(nombre);
			MostrarGrilla(ListaFruta);
		}
	}
	private: System::Void frmManteFruta_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e){
		this->objGestorFruta->Serializar();
	}
	private: System::Void dataGridView1_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){
		this->dataGridView1->Rows[e->RowIndex]->Selected = true;
	}
	};
}
