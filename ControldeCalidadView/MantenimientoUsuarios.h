#pragma once
#include "NuevoUsuario.h"

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
	/// Summary for MantenimientoUsuarios
	/// </summary>
	public ref class MantenimientoUsuarios: public System::Windows::Forms::Form{
	public:
		MantenimientoUsuarios(void){
			InitializeComponent();
			this->objGestorUsuarios = gcnew GestorUsuario();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MantenimientoUsuarios(){
			if (components){
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: GestorUsuario^ objGestorUsuarios;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::Button^  button3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MantenimientoUsuarios::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(140, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Agregar nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantenimientoUsuarios::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(302, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantenimientoUsuarios::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4){
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 140);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(449, 150);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantenimientoUsuarios::dataGridView1_CellContentClick);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantenimientoUsuarios::dataGridView1_CellDoubleClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombres";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellidos";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Profesi�n";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																						 | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(469, 122);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4){ L"C�digo", L"Nombres", L"Apellidos", L"Profesi�n" });
			this->comboBox1->Location = System::Drawing::Point(92, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(204, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(253, 311);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantenimientoUsuarios::button3_Click);
			// 
			// MantenimientoUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 359);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MantenimientoUsuarios";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Usuarios";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MantenimientoUsuarios::MantenimientoUsuarios_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MantenimientoUsuarios::MantenimientoUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){
		//this->dataGridView1->Rows[0]->Selected = this->dataGridView1->SelectedRows[0]->Cells[0]->RowIndex;
		//this->dataGridView1->SelectedRows[0]->Cells[0]->Value;
		//this->dataGridView1->Rows[0]->Selected = e->ColumnIndex;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		NuevoUsuario^ VentanaNuevoUsuario = gcnew NuevoUsuario(this->objGestorUsuarios->ListaUsuarios->Count);
		if (VentanaNuevoUsuario->ShowDialog() == System::Windows::Forms::DialogResult::OK){
			this->objGestorUsuarios->AgregarUsuario(VentanaNuevoUsuario->newUser);
			MostrarGrilla();
		}

	}
	private: void MostrarGrilla(){
		this->dataGridView1->Rows->Clear();
		List<Usuario^>^ ListaUsuarios = this->objGestorUsuarios->ListaUsuarios;
		for (int i = 0; i < ListaUsuarios->Count; i++){
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(ListaUsuarios[i]->codigo);
			fila[1] = ListaUsuarios[i]->nombres;
			fila[2] = ListaUsuarios[i]->apellidos;
			fila[3] = ListaUsuarios[i]->profesion;
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: void MostrarGrilla(Usuario^ user){
		this->dataGridView1->Rows->Clear();
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = Convert::ToString(user->codigo);
		fila[1] = user->nombres;
		fila[2] = user->apellidos;
		fila[3] = user->profesion;
		this->dataGridView1->Rows->Add(fila);
	}

	private: void MostrarGrilla(List<Usuario^>^ ListaUsuarios){
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < ListaUsuarios->Count; i++){
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(ListaUsuarios[i]->codigo);
			fila[1] = ListaUsuarios[i]->nombres;
			fila[2] = ListaUsuarios[i]->apellidos;
			fila[3] = ListaUsuarios[i]->profesion;
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: System::Void MantenimientoUsuarios_Load(System::Object^  sender, System::EventArgs^  e){
		this->objGestorUsuarios->Deserializar();
		MostrarGrilla();
	}
	private: System::Void MantenimientoUsuarios_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e){
		this->objGestorUsuarios->Serializar();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e){
		//this->objGestorUsuarios->EliminarUsuarioxCodigo(Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value));
		this->objGestorUsuarios->EliminarUsuarioxCodigo(Convert::ToInt32(this->dataGridView1->Rows[this->dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value));
		MostrarGrilla();
	}
	private: System::Void dataGridView1_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){
		this->dataGridView1->Rows[e->RowIndex]->Selected = true;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e){
		if (this->comboBox1->Text == "C�digo"){
			if (this->textBox1->Text == ""){
				MostrarGrilla();
			} else{

				MostrarGrilla(this->objGestorUsuarios->ObtenerUsuarioxCodigo(Convert::ToInt32(this->textBox1->Text)));
			}
		} else if (this->comboBox1->Text == "Nombres"){
			if (this->textBox1->Text == ""){
				MostrarGrilla();
			} else{

				MostrarGrilla(this->objGestorUsuarios->ObtenerUsuarioxNombre(this->textBox1->Text));
			}
		} else if (this->comboBox1->Text == "Apellidos"){
			if (this->textBox1->Text == ""){
				MostrarGrilla();
			} else{

				MostrarGrilla(this->objGestorUsuarios->ObtenerUsuarioxApellidos(this->textBox1->Text));
			}
		} else if (this->comboBox1->Text == "Profesi�n"){
			if (this->textBox1->Text == ""){
				MostrarGrilla();
			} else{

				MostrarGrilla(this->objGestorUsuarios->ObtenerUsuarioxProfesion(this->textBox1->Text));
			}
		}
	}
	};
}
