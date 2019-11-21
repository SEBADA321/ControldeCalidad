#pragma once

namespace ControldeCalidadView{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaSerial
	/// </summary>
	public ref class VentanaSerial: public System::Windows::Forms::Form{
	public:
		VentanaSerial(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaSerial(System::IO::Ports::SerialPort^ serial, System::Windows::Forms::ToolStripItem^ cerrarpuerto, System::Windows::Forms::Timer^  timer1){
			InitializeComponent();
			this->serial = serial;
			this->cerrarpuerto = cerrarpuerto;
			this->timer1 = timer1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaSerial(){
			if (components){
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  bt_act;
	private: System::Windows::Forms::ComboBox^  cb_baudrate;
	private: System::Windows::Forms::ComboBox^  lista_puertos;
	public: System::IO::Ports::SerialPort^ serial;
	public: System::Windows::Forms::ToolStripItem^ cerrarpuerto;
	public: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  tb_int;
	private: System::Windows::Forms::Label^  lb_timer;

	private: System::Windows::Forms::Button^  bt_guardar;
	private: System::Windows::Forms::ToolTip^  tt_bt_act;
	private: System::Windows::Forms::ToolTip^  tt_lb_int;
	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaSerial::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bt_act = (gcnew System::Windows::Forms::Button());
			this->cb_baudrate = (gcnew System::Windows::Forms::ComboBox());
			this->lista_puertos = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_int = (gcnew System::Windows::Forms::TextBox());
			this->lb_timer = (gcnew System::Windows::Forms::Label());
			this->bt_guardar = (gcnew System::Windows::Forms::Button());
			this->tt_bt_act = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tt_lb_int = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																						 | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->bt_act);
			this->groupBox1->Controls->Add(this->cb_baudrate);
			this->groupBox1->Controls->Add(this->lista_puertos);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(372, 110);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Serial";
			// 
			// bt_act
			// 
			this->bt_act->Location = System::Drawing::Point(257, 33);
			this->bt_act->Name = L"bt_act";
			this->bt_act->Size = System::Drawing::Size(75, 23);
			this->bt_act->TabIndex = 3;
			this->bt_act->Text = L"Actualizar";
			this->bt_act->UseVisualStyleBackColor = true;
			this->bt_act->Click += gcnew System::EventHandler(this, &VentanaSerial::bt_act_Click);
			// 
			// cb_baudrate
			// 
			this->cb_baudrate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_baudrate->FormattingEnabled = true;
			this->cb_baudrate->Items->AddRange(gcnew cli::array< System::Object^  >(10){
				L"300", L"600", L"1200", L"2400", L"4800", L"9600",
					L"14400", L"19200", L"28800", L"38400"
			});
			this->cb_baudrate->Location = System::Drawing::Point(130, 60);
			this->cb_baudrate->Name = L"cb_baudrate";
			this->cb_baudrate->Size = System::Drawing::Size(121, 21);
			this->cb_baudrate->TabIndex = 4;
			this->cb_baudrate->SelectionChangeCommitted += gcnew System::EventHandler(this, &VentanaSerial::cb_baudrate_SelectionChangeCommitted);
			// 
			// lista_puertos
			// 
			this->lista_puertos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->lista_puertos->FormattingEnabled = true;
			this->lista_puertos->Location = System::Drawing::Point(130, 33);
			this->lista_puertos->Name = L"lista_puertos";
			this->lista_puertos->Size = System::Drawing::Size(121, 21);
			this->lista_puertos->TabIndex = 2;
			this->lista_puertos->SelectionChangeCommitted += gcnew System::EventHandler(this, &VentanaSerial::lista_puertos_SelectionChangeCommitted);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Baudrate:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Puertos:";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																						 | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->tb_int);
			this->groupBox2->Controls->Add(this->lb_timer);
			this->groupBox2->Location = System::Drawing::Point(12, 128);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(372, 91);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Timer";
			// 
			// tb_int
			// 
			this->tb_int->Location = System::Drawing::Point(182, 45);
			this->tb_int->Name = L"tb_int";
			this->tb_int->Size = System::Drawing::Size(100, 20);
			this->tb_int->TabIndex = 5;
			this->tb_int->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VentanaSerial::tb_int_KeyPress);
			// 
			// lb_timer
			// 
			this->lb_timer->AutoSize = true;
			this->lb_timer->Location = System::Drawing::Point(103, 48);
			this->lb_timer->Name = L"lb_timer";
			this->lb_timer->Size = System::Drawing::Size(70, 13);
			this->lb_timer->TabIndex = 0;
			this->lb_timer->Text = L"Intervalo(ms):";
			// 
			// bt_guardar
			// 
			this->bt_guardar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->bt_guardar->Location = System::Drawing::Point(161, 225);
			this->bt_guardar->Name = L"bt_guardar";
			this->bt_guardar->Size = System::Drawing::Size(75, 23);
			this->bt_guardar->TabIndex = 6;
			this->bt_guardar->Text = L"Guardar";
			this->bt_guardar->UseVisualStyleBackColor = true;
			this->bt_guardar->Click += gcnew System::EventHandler(this, &VentanaSerial::bt_guardar_Click);
			// 
			// VentanaSerial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 265);
			this->Controls->Add(this->bt_guardar);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VentanaSerial";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ventana Serial";
			this->Load += gcnew System::EventHandler(this, &VentanaSerial::VentanaSerial_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Carga valores iniciales
	private: System::Void VentanaSerial_Load(System::Object^  sender, System::EventArgs^  e){
		this->lista_puertos->Items->Clear();
		this->lista_puertos->Items->AddRange(this->serial->GetPortNames());
		this->tb_int->Text = Convert::ToString(this->timer1->Interval);
		if (!this->serial->IsOpen){
			this->Text = L"Abrir puerto";
		} else{
			this->Text = L"Configurar puerto";
			this->timer1->Stop();
			this->lista_puertos->Items->Clear();
			this->lista_puertos->Items->AddRange(this->serial->GetPortNames());
			this->lista_puertos->SelectedIndex = this->lista_puertos->FindString(this->serial->PortName);
			this->cb_baudrate->SelectedIndex = this->cb_baudrate->FindString(Convert::ToString(this->serial->BaudRate));
		}
		this->tt_bt_act->SetToolTip(this->bt_act, "Actualiza la lista de puertos seriales");
		this->tt_lb_int->SetToolTip(this->lb_timer, "Intervalo en el que se leerá del puerto");
	}
	private: System::Void bt_act_Click(System::Object^  sender, System::EventArgs^  e){
		this->lista_puertos->Items->Clear();
		this->lista_puertos->Items->AddRange(this->serial->GetPortNames());
	}

			 //
	private: System::Void bt_guardar_Click(System::Object^  sender, System::EventArgs^  e){
		if ((!(this->lista_puertos->SelectedIndex == -1) && !(this->cb_baudrate->SelectedIndex == -1)) && !(this->tb_int->Text == "" || Convert::ToInt32(this->tb_int->Text) == 0)){
			this->serial->Close();
			this->serial->BaudRate = Convert::ToInt32(this->cb_baudrate->Text);
			this->serial->PortName = this->lista_puertos->Text;
			this->serial->Open();
			this->cerrarpuerto->Enabled = true;
			this->timer1->Interval = Convert::ToInt32(this->tb_int->Text);
			this->timer1->Start();
			this->Close();
		} else{
			MessageBox::Show("Completar todos los campos");
		}
	}
	private: System::Void tb_int_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e){

		if ((!Char::IsDigit(e->KeyChar) && (e->KeyChar != 0x08)) && (e->KeyChar != 0x0D)){
			e->Handled = true;
		} else if (e->KeyChar == 0x0D){
			this->bt_guardar->Focus();
			e->Handled = true;
		}
	}
	private: System::Void lista_puertos_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e){
		this->cb_baudrate->Focus();
	}
	private: System::Void cb_baudrate_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e){
		this->tb_int->Focus();
	}
};
}
