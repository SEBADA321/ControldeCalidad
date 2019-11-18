#pragma once

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
	/// Summary for frmAgregarFruta
	/// </summary>
	public ref class frmAgregarFruta: public System::Windows::Forms::Form{
	public:
		frmAgregarFruta(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAgregarFruta(){
			if (components){
				delete components;
			}
		}

	private:
	public: List<Fruta^>^ nfruta;
	private: GestorFruta^objGestorFruta;
	private: System::Windows::Forms::Button^  button1;
	public:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox2;
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
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox5 = (gcnew System::Windows::Forms::TextBox());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(101, 226);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(75, 23);
				 this->button1->TabIndex = 0;
				 this->button1->Text = L"Guardar";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &frmAgregarFruta::button1_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(26, 18);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(43, 13);
				 this->label1->TabIndex = 1;
				 this->label1->Text = L"Código:";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(26, 44);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(47, 13);
				 this->label2->TabIndex = 2;
				 this->label2->Text = L"Nombre:";
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(130, 15);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(121, 20);
				 this->textBox1->TabIndex = 3;
				 this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarFruta::textBox1_KeyPress);
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(26, 71);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(49, 13);
				 this->label3->TabIndex = 5;
				 this->label3->Text = L"Tamaño:";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(26, 97);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(34, 13);
				 this->label4->TabIndex = 6;
				 this->label4->Text = L"Color:";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(26, 125);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(43, 13);
				 this->label5->TabIndex = 7;
				 this->label5->Text = L"Estado:";
				 // 
				 // textBox3
				 // 
				 this->textBox3->Location = System::Drawing::Point(130, 68);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->ReadOnly = true;
				 this->textBox3->Size = System::Drawing::Size(121, 20);
				 this->textBox3->TabIndex = 8;
				 // 
				 // textBox4
				 // 
				 this->textBox4->Location = System::Drawing::Point(130, 94);
				 this->textBox4->Name = L"textBox4";
				 this->textBox4->ReadOnly = true;
				 this->textBox4->Size = System::Drawing::Size(121, 20);
				 this->textBox4->TabIndex = 9;
				 // 
				 // textBox5
				 // 
				 this->textBox5->Location = System::Drawing::Point(130, 122);
				 this->textBox5->Name = L"textBox5";
				 this->textBox5->ReadOnly = true;
				 this->textBox5->Size = System::Drawing::Size(121, 20);
				 this->textBox5->TabIndex = 10;
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Location = System::Drawing::Point(130, 41);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(121, 21);
				 this->comboBox1->TabIndex = 11;
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(89, 191);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(52, 13);
				 this->label6->TabIndex = 12;
				 this->label6->Text = L"Cantidad:";
				 // 
				 // textBox2
				 // 
				 this->textBox2->Location = System::Drawing::Point(147, 188);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(41, 20);
				 this->textBox2->TabIndex = 13;
				 this->textBox2->Text = L"1";
				 this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				 this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarFruta::textBox2_KeyPress);
				 // 
				 // frmAgregarFruta
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(276, 261);
				 this->Controls->Add(this->textBox2);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->comboBox1);
				 this->Controls->Add(this->textBox5);
				 this->Controls->Add(this->textBox4);
				 this->Controls->Add(this->textBox3);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->button1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
				 this->Name = L"frmAgregarFruta";
				 this->ShowInTaskbar = false;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Agregar Fruta";
				 this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmAgregarFruta::frmAgregarFruta_FormClosed);
				 this->Load += gcnew System::EventHandler(this, &frmAgregarFruta::frmAgregarFruta_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void frmAgregarFruta_Load(System::Object^  sender, System::EventArgs^  e){
		this->nfruta = gcnew List<Fruta^>();
		this->nfruta->Clear();
		this->objGestorFruta = gcnew GestorFruta();
		this->objGestorFruta->Deserializar();
		for (int i = 0; i < this->objGestorFruta->ListaFruta->Count; i++){
			this->comboBox1->Items->Add(this->objGestorFruta->ListaFruta[i]->nombre);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		if (!(this->textBox1->Text == "" || this->comboBox1->SelectedIndex == -1|| Convert::ToInt32(this->textBox2->Text) == 0)){
			int codInc = Convert::ToInt32(this->textBox1->Text);
			for (int i = 0; i < Convert::ToInt32(this->textBox2->Text); i++){
				Fruta^ fruta = gcnew Fruta();
				fruta->codigo = codInc;
				fruta->nombre = this->comboBox1->Text;
				fruta->color = "";
				this->nfruta->Add(fruta);
				codInc++;
			}
			this->Close();
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		} else{
			MessageBox::Show("Completar todos los campos");
		}
	}
	private: System::Void frmAgregarFruta_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e){
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e){
		if ((!Char::IsDigit(e->KeyChar) && (e->KeyChar != 0x08)) && (e->KeyChar != 0x0D)){
			e->Handled = true;
		}
	}
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e){
		if ((!Char::IsDigit(e->KeyChar) && (e->KeyChar != 0x08)) && (e->KeyChar != 0x0D)){
			e->Handled = true;
		}
	}
};
}
