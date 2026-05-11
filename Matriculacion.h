#pragma once
namespace Practica5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Matriculacion
	/// </summary>
	public ref class Matriculacion : public System::Windows::Forms::Form
	{
	public:
		Matriculacion(void)
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
		~Matriculacion()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(811, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(275, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(281, 221);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(213, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(281, 223);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(138, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Nombre de Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &Matriculacion::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(138, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Carrera";
			this->label2->Click += gcnew System::EventHandler(this, &Matriculacion::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(138, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Materia";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(154, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(476, 46);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Matriculacion Estudiantes";
			this->label4->Click += gcnew System::EventHandler(this, &Matriculacion::label4_Click);
			// 
			// Matriculacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 368);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Matriculacion";
			this->Text = L"Matriculacion";
			this->Load += gcnew System::EventHandler(this, &Matriculacion::Matriculacion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void matriculaToolStripMenuItem_Click(
		System::Object^ sender,
		System::EventArgs^ e) {

		this->Hide();

		Matriculacion^ ventana = gcnew Matriculacion();
		ventana->Show();
	}

	private: System::Void Matriculacion_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void abrirMatriculacionHToolStripMenuItem_Click(
		System::Object^ sender,
		System::EventArgs^ e) {

		try {
			// Obtener la ruta del archivo Matriculacion.h
			String^ rutaArchivo = System::IO::Path::Combine(
				System::IO::Path::GetDirectoryName(System::Reflection::Assembly::GetExecutingAssembly()->Location),
				L"Matriculacion.h"
			);

			// Verificar si el archivo existe
			if (!System::IO::File::Exists(rutaArchivo)) {
				// Intentar en el directorio del proyecto
				rutaArchivo = L"Matriculacion.h";
			}

			// Abrir el archivo con la aplicación predeterminada
			System::Diagnostics::Process::Start(rutaArchivo);
		}
		catch (Exception^ ex) {
			MessageBox::Show(
				"Error al abrir el archivo: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error
			);
		}
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
