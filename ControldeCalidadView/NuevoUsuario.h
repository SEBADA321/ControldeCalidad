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
	/// Summary for NuevoUsuario
	/// </summary>
	public ref class NuevoUsuario: public System::Windows::Forms::Form{
	public:
		NuevoUsuario(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NuevoUsuario(){
			if (components){
				delete components;
			}
		}
	public:Usuario^ newUser;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  bt_codigo;
	private: System::Windows::Forms::TextBox^  bt_nombres;
	private: System::Windows::Forms::TextBox^  bt_apellidos;
	private: System::Windows::Forms::TextBox^  bt_profesion;
	private: System::Windows::Forms::TextBox^  bt_contrasena;
	private: System::Windows::Forms::TextBox^  bt_rep_contrasena;
	public:
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bt_codigo = (gcnew System::Windows::Forms::TextBox());
			this->bt_nombres = (gcnew System::Windows::Forms::TextBox());
			this->bt_apellidos = (gcnew System::Windows::Forms::TextBox());
			this->bt_profesion = (gcnew System::Windows::Forms::TextBox());
			this->bt_contrasena = (gcnew System::Windows::Forms::TextBox());
			this->bt_rep_contrasena = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(134, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NuevoUsuario::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombres:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Apellidos:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Profesión:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Contraseña:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Repetir contraseña:";
			// 
			// bt_codigo
			// 
			this->bt_codigo->Location = System::Drawing::Point(137, 12);
			this->bt_codigo->Name = L"bt_codigo";
			this->bt_codigo->Size = System::Drawing::Size(185, 20);
			this->bt_codigo->TabIndex = 7;
			// 
			// bt_nombres
			// 
			this->bt_nombres->Location = System::Drawing::Point(137, 38);
			this->bt_nombres->Name = L"bt_nombres";
			this->bt_nombres->Size = System::Drawing::Size(185, 20);
			this->bt_nombres->TabIndex = 8;
			// 
			// bt_apellidos
			// 
			this->bt_apellidos->Location = System::Drawing::Point(137, 64);
			this->bt_apellidos->Name = L"bt_apellidos";
			this->bt_apellidos->Size = System::Drawing::Size(185, 20);
			this->bt_apellidos->TabIndex = 9;
			// 
			// bt_profesion
			// 
			this->bt_profesion->Location = System::Drawing::Point(137, 90);
			this->bt_profesion->Name = L"bt_profesion";
			this->bt_profesion->Size = System::Drawing::Size(185, 20);
			this->bt_profesion->TabIndex = 10;
			// 
			// bt_contrasena
			// 
			this->bt_contrasena->Location = System::Drawing::Point(137, 116);
			this->bt_contrasena->Name = L"bt_contrasena";
			this->bt_contrasena->PasswordChar = '*';
			this->bt_contrasena->Size = System::Drawing::Size(185, 20);
			this->bt_contrasena->TabIndex = 11;
			// 
			// bt_rep_contrasena
			// 
			this->bt_rep_contrasena->Location = System::Drawing::Point(137, 142);
			this->bt_rep_contrasena->Name = L"bt_rep_contrasena";
			this->bt_rep_contrasena->PasswordChar = '*';
			this->bt_rep_contrasena->Size = System::Drawing::Size(185, 20);
			this->bt_rep_contrasena->TabIndex = 12;
			// 
			// NuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 222);
			this->Controls->Add(this->bt_rep_contrasena);
			this->Controls->Add(this->bt_contrasena);
			this->Controls->Add(this->bt_profesion);
			this->Controls->Add(this->bt_apellidos);
			this->Controls->Add(this->bt_nombres);
			this->Controls->Add(this->bt_codigo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"NuevoUsuario";
			this->Text = L"Nuevo Usuario";
			this->Load += gcnew System::EventHandler(this, &NuevoUsuario::NuevoUsuario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NuevoUsuario_Load(System::Object^  sender, System::EventArgs^  e){
		this->newUser = gcnew Usuario();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		this->newUser->apellidos = this->bt_apellidos->Text;
		this->newUser->nombres = this->bt_nombres->Text;
		this->newUser->codigo = Convert::ToInt32(this->bt_codigo->Text);
		this->newUser->profesion = this->bt_profesion->Text;
		if (this->bt_contrasena->Text == this->bt_rep_contrasena->Text){
			this->newUser->password = this->bt_contrasena->Text;
			this->Close();
		} else{
			MessageBox::Show("Las contraseñas deben ser iguales");
		}
	}
	};
}
