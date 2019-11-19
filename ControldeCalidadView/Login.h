#pragma once
#include "frmPrincipal.h"

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
	/// Summary for Login
	/// </summary>
	public ref class Login: public System::Windows::Forms::Form{
	public:
		Login(void){
			InitializeComponent();
			this->objGestorUsuario = gcnew GestorUsuario();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login(){
			if (components){
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: GestorUsuario^ objGestorUsuario;
	protected:
	private: frmPrincipal^ ventanaPrincipal;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(286, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(269, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(339, 131);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(339, 157);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(176, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(383, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 336);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema control de calidad PUCP";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e){
		this->objGestorUsuario->Deserializar();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		bool correcto = false;
		int j;
		for (int i = 0; i < objGestorUsuario->ListaUsuarios->Count; i++){
			if ((this->objGestorUsuario->ListaUsuarios[i]->nombres == textBox1->Text) &&
				(this->objGestorUsuario->ListaUsuarios[i]->password == textBox2->Text)){
				correcto = true;
				j = i;
				break;
			}
		}
		if (correcto){
			this->ventanaPrincipal = gcnew frmPrincipal(this->objGestorUsuario->ListaUsuarios[j]);
			this->Hide();
			if (this->ventanaPrincipal->ShowDialog() == System::Windows::Forms::DialogResult::No){
				this->Close();
			}
		} else if (this->textBox1->Text == "admin" && this->textBox2->Text == "admin"){
			this->ventanaPrincipal = gcnew frmPrincipal();
			this->ventanaPrincipal->admin = true;
			this->Hide();
			if (this->ventanaPrincipal->ShowDialog() == System::Windows::Forms::DialogResult::No){
				this->Close();
			}
		} else{
			MessageBox::Show("El usuario y/o contraseña no es correcto");
		}
	}
	};
}
