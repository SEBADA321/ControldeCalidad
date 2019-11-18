#pragma once

namespace ControldeCalidadView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VerProceso
	/// </summary>
	public ref class VerProceso : public System::Windows::Forms::Form
	{
	public:
		VerProceso(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VerProceso(System::Windows::Forms::Timer^  timer1){
			InitializeComponent();
			this->timer1 = timer1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VerProceso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
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
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(132, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// VerProceso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Name = L"VerProceso";
			this->Text = L"VerProceso";
			this->Load += gcnew System::EventHandler(this, &VerProceso::VerProceso_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VerProceso_Load(System::Object^  sender, System::EventArgs^  e){
		this->label1->Text = Convert::ToString(this->timer1->Interval);
	}
	};
}
