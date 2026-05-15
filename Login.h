#pragma once
#include "UserManager.h"
#include "Register.h"

namespace Practica5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ lblTitle;

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
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->lblTitle->Location = System::Drawing::Point(50, 20);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(121, 24);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Iniciar Sesión";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Location = System::Drawing::Point(50, 70);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(35, 13);
			this->lblEmail->TabIndex = 1;
			this->lblEmail->Text = L"Email:";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(50, 90);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(200, 20);
			this->txtEmail->TabIndex = 2;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(50, 130);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(61, 13);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Contrasena:";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(50, 150);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(200, 20);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::LightBlue;
			this->btnLogin->Location = System::Drawing::Point(50, 200);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(90, 35);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::LightGreen;
			this->btnRegister->Location = System::Drawing::Point(160, 200);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(90, 35);
			this->btnRegister->TabIndex = 6;
			this->btnRegister->Text = L"Registrarse";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Login::btnRegister_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 300);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblTitle);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		// Validar que los campos no estén vacíos
		if (txtEmail->Text->Length == 0 || txtPassword->Text->Length == 0) {
			MessageBox::Show("Por favor completa todos los campos", "Error de Validación", 
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Convertir de System::String^ a std::string
		std::string email = std::string((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(txtEmail->Text)).ToPointer());
		std::string password = std::string((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(txtPassword->Text)).ToPointer());

		// Autenticar usuario
		UserManager manager;
		if (manager.AutenticarUsuario(email, password)) {
			Usuario* usuario = manager.ObtenerUsuario(email);
			String^ nombre = gcnew String(usuario->nombre.c_str());
			String^ apellido = gcnew String(usuario->apellido.c_str());
			String^ mensaje = "¡Bienvenido " + nombre + " " + apellido + "!";
			MessageBox::Show(mensaje, "Login Exitoso", 
				MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		else {
			MessageBox::Show("Email o contraseña incorrectos", "Error de Autenticación", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			txtPassword->Clear();
			txtEmail->Clear();
			txtEmail->Focus();
		}
	}
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		Register^ registerForm = gcnew Register();
		registerForm->ShowDialog();
	}
	};
}
