#pragma once

namespace Practica5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Integration::ElementHost^ elementHost1;
	protected:

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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->elementHost1 = (gcnew System::Windows::Forms::Integration::ElementHost());
			this->SuspendLayout();
			// 
			// elementHost1
			// 
			this->elementHost1->BackColor = System::Drawing::Color::Wheat;
			this->elementHost1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->elementHost1->Location = System::Drawing::Point(241, 37);
			this->elementHost1->Name = L"elementHost1";
			this->elementHost1->Size = System::Drawing::Size(307, 75);
			this->elementHost1->TabIndex = 0;
			this->elementHost1->Text = L"hola";
			this->elementHost1->ChildChanged += gcnew System::EventHandler<System::Windows::Forms::Integration::ChildChangedEventArgs^ >(this, &mainForm::elementHost1_ChildChanged);
			this->elementHost1->Child = nullptr;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->ClientSize = System::Drawing::Size(867, 321);
			this->Controls->Add(this->elementHost1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"mainForm";
			this->Text = L"Practica 5";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void elementHost1_ChildChanged(System::Object^ sender, System::Windows::Forms::Integration::ChildChangedEventArgs^ e) {
	}
	};
}
