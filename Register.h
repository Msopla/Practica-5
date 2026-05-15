#pragma once
#include "UserManager.h"

namespace Practica5 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Resumen de Register
    /// </summary>
    public ref class Register : public System::Windows::Forms::Form
    {
    public:
        Register(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~Register()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ lblNombre;
    private: System::Windows::Forms::Label^ lblApellido;
    private: System::Windows::Forms::Label^ lblEmail;
    private: System::Windows::Forms::Label^ lblPassword;
    private: System::Windows::Forms::TextBox^ txtNombre;
    private: System::Windows::Forms::TextBox^ txtApellido;
    private: System::Windows::Forms::TextBox^ txtEmail;
    private: System::Windows::Forms::TextBox^ txtPassword;
    private: System::Windows::Forms::Button^ btnRegistro;
    private: System::Windows::Forms::Button^ btnCancelar;
    private: System::Windows::Forms::Label^ lblTitle;

    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        void InitializeComponent(void)
        {
            this->lblTitle = (gcnew System::Windows::Forms::Label());
            this->lblNombre = (gcnew System::Windows::Forms::Label());
            this->lblApellido = (gcnew System::Windows::Forms::Label());
            this->lblEmail = (gcnew System::Windows::Forms::Label());
            this->lblPassword = (gcnew System::Windows::Forms::Label());
            this->txtNombre = (gcnew System::Windows::Forms::TextBox());
            this->txtApellido = (gcnew System::Windows::Forms::TextBox());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtPassword = (gcnew System::Windows::Forms::TextBox());
            this->btnRegistro = (gcnew System::Windows::Forms::Button());
            this->btnCancelar = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // lblTitle
            // 
            this->lblTitle->AutoSize = true;
            this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
            this->lblTitle->Location = System::Drawing::Point(50, 20);
            this->lblTitle->Name = L"lblTitle";
            this->lblTitle->Size = System::Drawing::Size(155, 24);
            this->lblTitle->TabIndex = 0;
            this->lblTitle->Text = L"Formulario de Registro";
            // 
            // lblNombre
            // 
            this->lblNombre->AutoSize = true;
            this->lblNombre->Location = System::Drawing::Point(50, 70);
            this->lblNombre->Name = L"lblNombre";
            this->lblNombre->Size = System::Drawing::Size(47, 13);
            this->lblNombre->TabIndex = 1;
            this->lblNombre->Text = L"Nombre:";
            // 
            // txtNombre
            // 
            this->txtNombre->Location = System::Drawing::Point(50, 90);
            this->txtNombre->Name = L"txtNombre";
            this->txtNombre->Size = System::Drawing::Size(250, 20);
            this->txtNombre->TabIndex = 2;
            // 
            // lblApellido
            // 
            this->lblApellido->AutoSize = true;
            this->lblApellido->Location = System::Drawing::Point(50, 130);
            this->lblApellido->Name = L"lblApellido";
            this->lblApellido->Size = System::Drawing::Size(50, 13);
            this->lblApellido->TabIndex = 3;
            this->lblApellido->Text = L"Apellido:";
            // 
            // txtApellido
            // 
            this->txtApellido->Location = System::Drawing::Point(50, 150);
            this->txtApellido->Name = L"txtApellido";
            this->txtApellido->Size = System::Drawing::Size(250, 20);
            this->txtApellido->TabIndex = 4;
            // 
            // lblEmail
            // 
            this->lblEmail->AutoSize = true;
            this->lblEmail->Location = System::Drawing::Point(50, 190);
            this->lblEmail->Name = L"lblEmail";
            this->lblEmail->Size = System::Drawing::Size(35, 13);
            this->lblEmail->TabIndex = 5;
            this->lblEmail->Text = L"Email:";
            // 
            // txtEmail
            // 
            this->txtEmail->Location = System::Drawing::Point(50, 210);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(250, 20);
            this->txtEmail->TabIndex = 6;
            // 
            // lblPassword
            // 
            this->lblPassword->AutoSize = true;
            this->lblPassword->Location = System::Drawing::Point(50, 250);
            this->lblPassword->Name = L"lblPassword";
            this->lblPassword->Size = System::Drawing::Size(61, 13);
            this->lblPassword->TabIndex = 7;
            this->lblPassword->Text = L"Contrasena:";
            // 
            // txtPassword
            // 
            this->txtPassword->Location = System::Drawing::Point(50, 270);
            this->txtPassword->Name = L"txtPassword";
            this->txtPassword->Size = System::Drawing::Size(250, 20);
            this->txtPassword->TabIndex = 8;
            this->txtPassword->UseSystemPasswordChar = true;
            // 
            // btnRegistro
            // 
            this->btnRegistro->BackColor = System::Drawing::Color::LightGreen;
            this->btnRegistro->Location = System::Drawing::Point(50, 320);
            this->btnRegistro->Name = L"btnRegistro";
            this->btnRegistro->Size = System::Drawing::Size(110, 35);
            this->btnRegistro->TabIndex = 9;
            this->btnRegistro->Text = L"Registrarse";
            this->btnRegistro->UseVisualStyleBackColor = false;
            this->btnRegistro->Click += gcnew System::EventHandler(this, &Register::btnRegistro_Click);
            // 
            // btnCancelar
            // 
            this->btnCancelar->BackColor = System::Drawing::Color::LightCoral;
            this->btnCancelar->Location = System::Drawing::Point(190, 320);
            this->btnCancelar->Name = L"btnCancelar";
            this->btnCancelar->Size = System::Drawing::Size(110, 35);
            this->btnCancelar->TabIndex = 10;
            this->btnCancelar->Text = L"Cancelar";
            this->btnCancelar->UseVisualStyleBackColor = false;
            this->btnCancelar->Click += gcnew System::EventHandler(this, &Register::btnCancelar_Click);
            // 
            // Register
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(380, 400);
            this->Controls->Add(this->btnCancelar);
            this->Controls->Add(this->btnRegistro);
            this->Controls->Add(this->txtPassword);
            this->Controls->Add(this->lblPassword);
            this->Controls->Add(this->txtEmail);
            this->Controls->Add(this->lblEmail);
            this->Controls->Add(this->txtApellido);
            this->Controls->Add(this->lblApellido);
            this->Controls->Add(this->txtNombre);
            this->Controls->Add(this->lblNombre);
            this->Controls->Add(this->lblTitle);
            this->Name = L"Register";
            this->Text = L"Registro de Usuario";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void btnRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
        // Validar que todos los campos estén llenos
        if (txtNombre->Text->Length == 0 || txtApellido->Text->Length == 0 || 
            txtEmail->Text->Length == 0 || txtPassword->Text->Length == 0) {
            MessageBox::Show("Por favor completa todos los campos", "Error de Validación", 
                MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        // Convertir de System::String^ a std::string
        std::string nombre = std::string((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(txtNombre->Text)).ToPointer());
        std::string apellido = std::string((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(txtApellido->Text)).ToPointer());
        std::string email = std::string((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(txtEmail->Text)).ToPointer());
        std::string password = std::string((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(txtPassword->Text)).ToPointer());

        // Registrar usuario
        UserManager manager;
        if (manager.RegistrarUsuario(nombre, apellido, email, password)) {
            MessageBox::Show("¡Usuario registrado exitosamente!", "Éxito", 
                MessageBoxButtons::OK, MessageBoxIcon::Information);
            this->Close();
        }
        else {
            MessageBox::Show("El email ya está registrado", "Error", 
                MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    };
}

